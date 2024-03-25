# Test Cases

1. **Test Case 1: Push Operations**
    - **Steps:**
        1. Create a stack.
        2. Push elements 10, 20, 30, 40, and 50 into the stack.
        3. Attempt to push one more element into the stack.
    - **Expected Output:** 
        - 10 pushed into stack
        - 20 pushed into stack
        - 30 pushed into stack
        - 40 pushed into stack
        - 50 pushed into stack
        - Stack Overflow message (as the stack capacity is exceeded)

2. **Test Case 2: Pop and Peek Operations**
    - **Steps:**
        1. Create a stack.
        2. Push elements 10, 20, 30, 40, and 50 into the stack.
        3. Pop an element from the stack.
        4. Peek at the top element of the stack.
    - **Expected Output:** 
        - 10 pushed into stack
        - 20 pushed into stack
        - 30 pushed into stack
        - 40 pushed into stack
        - 50 pushed into stack
        - 50 popped from stack
        - Top element is 40
