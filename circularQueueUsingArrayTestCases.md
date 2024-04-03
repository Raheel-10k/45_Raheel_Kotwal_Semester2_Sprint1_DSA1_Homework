## Test Cases:

1. **Enqueue and Dequeue Operations with Circular Queue:**
   - **Input:** Enqueue 10, 20, 30, 40, Dequeue, Enqueue 50, Dequeue, Enqueue 60, Dequeue, Dequeue
   - **Expected Output:** 
     ```
     Enqueue successful.
     Enqueue successful.
     Enqueue successful.
     Enqueue successful.
     Dequeued element: 10
     Enqueue successful.
     Dequeued element: 20
     Enqueue successful.
     Dequeued element: 30
     Dequeued element: 40
     ```

2. **Peek Operation with Circular Queue:**
   - **Input:** Enqueue 10, Peek, Dequeue
   - **Expected Output:** 
     ```
     Enqueue successful.
     Front element: 10
     Dequeued element: 10
     ```

These test cases effectively demonstrate the circular queue behavior, ensuring proper enqueue, dequeue, and peek operations.
