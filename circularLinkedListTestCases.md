### Test Cases for Circular Linked List Implementation

1. **Insertion and Deletion Test:**
   - **Input:** Insert 10, 20, and 30 at the end of an empty list. Then delete the node with value 20.
   - **Expected Output:** List after insertion: 10 -> 20 -> 30 -> (points back to the first node). After deletion: 10 -> 30 -> (points back to the first node).

2. **Insertion Before and After Target Test:**
   - **Input:** Insert 10, 20, and 30 at the end of an empty list. Insert 50 before the target value 20, and insert 40 after the target value 20.
   - **Expected Output:** List after insertion: 10 -> 50 -> 20 -> 40 -> 30 -> (points back to the first node).
