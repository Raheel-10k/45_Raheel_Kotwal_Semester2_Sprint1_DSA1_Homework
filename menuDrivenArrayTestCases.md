## Test Cases for Array Operations Program

### Test Case 1: Mix of Insertions and Deletions

1. **Input:**
   - Choose option 1 for insertion.
   - Choose option 1 to insert at the start with a value of 10.
   - Choose option 1 to insert at the start with a value of 20.
   - Choose option 2 to insert at the end with a value of 30.
   - Choose option 3 to insert before a location with a value of 40 at index 2.
   - Choose option 4 to insert after a location with a value of 50 at index 1.
   - Choose option 2 for deletion.
   - Choose option 1 to delete at the start.
   - Choose option 3 to delete before a location at index 2.
   - Choose option 5 to delete at a location at index 3.
   - Choose option 4 to delete after a location at index 1.
   - Choose option 2 to delete at the end.
   - Choose option 3 to exit.

2. **Expected Output:**
   - Array after each insertion/deletion operation should be displayed.
   - The final array should be displayed before the program exits. [10]

### Test Case 2: Multiple Insertions and Deletions with Invalid Inputs

1. **Input:**
   - Choose option 1 for insertion.
   - Choose option 1 to insert at the start with a value of 10.
   - Choose option 2 to insert at the end with a value of 20.
   - Choose option 3 to insert before a location with a value of 30 at index 3.
   - Choose option 4 to insert after a location with a value of 40 at index 4.
   - Choose option 5 to insert at a location with a value of 50 at index 6.
   - Choose option 2 for deletion.
   - Choose option 1 to delete at the start.
   - Choose option 3 to delete before a location at index 2.
   - Choose option 5 to delete at a location at index 7.
   - Choose option 4 to delete after a location at index 3.
   - Choose option 2 to delete at the end.
   - Choose an invalid option (e.g., 6).
   - Choose option 3 to exit.

2. **Expected Output:**
   - Array after each valid insertion/deletion operation should be displayed.
   - Error message for invalid inputs should be displayed.
   - The final array should be displayed before the program exits.
