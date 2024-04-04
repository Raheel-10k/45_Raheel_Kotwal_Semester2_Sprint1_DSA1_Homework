## Test Cases for Binary Search Tree ADT

### Test Case 1:
1. **Operation:** Insert 50, 30, 70, 20, 40, 60, 80 into the BST.
- **Expected Output:** Inorder Traversal should be: 20 30 40 50 60 70 80

2. **Operation:** Delete the node with value 30.
   - **Expected Output:** Inorder Traversal after deletion should be: 20 40 50 60 70 80

### Test Case 2:
1. **Operation:** Attempt to delete a node from an empty tree.
   - **Expected Output:** Display an appropriate message indicating that the tree is empty and cannot perform deletion.

2. **Operation:** Insert 50, 30, 70, 20, 40, 60, 80 into the BST. Then, delete the leaf node with value 80.
   - **Expected Output:** Inorder Traversal after deletion should be: 20 30 40 50 60 70
