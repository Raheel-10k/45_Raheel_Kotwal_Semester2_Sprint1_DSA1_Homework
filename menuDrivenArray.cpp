#include "iostream"
using namespace std;

class Array
{
    private:
        int size;
        int *arr; //repreesnts the array.
    public:
        Array(int sz) {
            size=sz;
            arr=new int[size];
            for(int i=0;i<size;i++)
            {
                cout<<"Enter Val "<<i<<": ";
                cin>>arr[i];
            }
        } //initial array creation

        void display() {
            for(int i=0;i<size;i++) {
                if(i==0) {
                    cout<<arr[i];
                    continue;
                }
                cout<<" "<<arr[i];
            }
            cout<<endl;
        }

        void insertAtStart(int val) {
            int *arr1=new int[++size];

            for(int i=size-1;i>0;i--) {
                arr1[i]=arr[i-1];
            }
            arr1[0]=val;
            delete[] arr;

            arr=arr1;
            cout<<"Insert At start: ";
            display();
        }

        void insertAtGivenLocation(int val, int location) {
            if(location>size || location<0) {
                cout<<"Invalid location given."<<endl;
                return;
            }
            int *arr1=new int[++size];
            for(int i=0;i<location;i++) {
                arr1[i]=arr[i];
            }

            for(int i=location+1;i<size;i++) {
                arr1[i]=arr[i-1];
            }
            arr1[location]=val;

            delete[] arr;
            arr=arr1;
            cout<<"Insert At location: ";
            display();
        } //same as before location as values shift forward

        void insertAtBeforeLocation(int val, int location)
        {
            if(location>size || location<=0) {
                cout<<"Invalid location given."<<endl;
                return;
            }
            size++;
            int *arr1=new int[size];
            for(int i=0;i<=location;i++) {
                arr1[i]=arr[i];
            }
            for(int i=location;i<size;i++) {
                arr1[i]=arr[i-1];
            }
            arr1[location]=val;
            delete[] arr;

            arr=arr1;
            cout<<"Insert Before location: ";
            display();
        } //same as at given location as values shift forward

        void insertAfterLocation(int val, int location) {
            if(location>size || location<0) {
                cout<<"Invalid location given."<<endl;
                return;
            }
            int *arr1=new int[++size];
            for(int i=0;i<=location;i++) {
                arr1[i]=arr[i];
            }
            for(int i=location+1;i<size;i++) {
                arr1[i]=arr[i-1];
            }
            arr1[location+1]=val;

            delete[] arr;
            arr=arr1;
            cout<<"Insert After location: ";
            display();
        }

        void insertAtEnd(int val) {
            int *arr1=new int[++size];
            for(int i=0;i<size;i++) {
                arr1[i]=arr[i];
            }
            arr[size-1]=val;
            cout<<"Insert End: ";
            display();
        }

        void deleteFirst() {
            int *arr1=new int[--size];
            for(int i=1;i<=size;i++) {
                arr1[i-1]=arr[i];
            }
            delete[] arr;
            arr=arr1;
            cout<<"Delete First: ";
            display();
        }

        void deleteAtGivenLocation(int location) {
            if(location>size || location<=0) {
                cout<<"Invalid location."<<endl;
                return;
            }
            int *arr1=new int[--size];
            for(int i=0;i<=size;i++) {
                if(i>=location) {
                    if(i==location) {
                        continue;
                    }
                    arr1[i-1]=arr[i];
                }
                else {
                    arr1[i]=arr[i];
                }
            }
            delete[] arr;

            arr=arr1;
            cout<<"Delete At Given Location: ";
            display();
        }

        void deleteBeforeGivenLocation(int location) {
            if(location>size || location<=0) {
                cout<<"Invalid location."<<endl;
                return;
            }
            int *arr1=new int[--size];
            for(int i=0;i<=size;i++) {
                if(i>=location-1) {
                    if(i==location-1) {
                        continue;
                    }
                    arr1[i-1]=arr[i];
                }
                else {
                    arr1[i]=arr[i];
                }
            }
            delete[] arr;

            arr=arr1;
            cout<<"Delete At Before Location: ";
            display();
        }

        void deleteAfterGivenLocation(int location) {
            if(location>size || location<=0) {
                cout<<"Invalid location."<<endl;
                return;
            }
            int *arr1=new int[--size];
            for(int i=0;i<=size;i++) {
                if(i>location) {
                    if(i==location+1) {
                        continue;
                    }
                    arr1[i-1]=arr[i];
                }
                else {
                    arr1[i]=arr[i];
                }
            }
            delete[] arr;

            arr=arr1;
            cout<<"Delete At After Location: ";
            display();
        }

        void deleteEnd() {
            int *arr1=new int[--size];
            for(int i=0;i<size;i++) {
                arr1[i]=arr[i];
            }
            delete[] arr;

            arr=arr1;
            cout<<"Delete End: ";
            display();
        }
/*
    [1,2,3,4,5,6,7,8,9]
     0,1,2,3,4,5,6,7,8
*/
};

int main()
{
    int initialVAl = 0;
    cout << "Enter initail number of elements in array: ";
    cin >> initialVAl;
    Array arr(initialVAl);

    arr.display();

    arr.insertAtStart(-1);
    arr.insertAtBeforeLocation(20, 3);
    arr.insertAtGivenLocation(21, 3);
    arr.insertAfterLocation(100, 5);
    arr.insertAtEnd(99);

    arr.deleteFirst();
    arr.deleteAtGivenLocation(5);
    arr.deleteBeforeGivenLocation(4);
    arr.deleteAfterGivenLocation(1);
    arr.deleteEnd();
}
