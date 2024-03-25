### Test Cases for Infix to Postfix Conversion

#### Test Case 1: Basic Infix Expression
- **Input:** 
    ```
    Enter the infix expression: a+b*c
    ```
- **Expected Output:** 
    ```
    Infix Expression: a+b*c
    Postfix Expression: abc*+
    ```
- **Explanation:** 
    The input infix expression is "a+b*c". The corresponding postfix expression is "abc*+".

#### Test Case 2: Complex Infix Expression with Parentheses
- **Input:** 
    ```
    Enter the infix expression: (a+b)*c-d/e
    ```
- **Expected Output:** 
    ```
    Infix Expression: (a+b)*c-d/e
    Postfix Expression: ab+c*de/-
    ```
- **Explanation:** 
    The input infix expression is "(a+b)*c-d/e". The corresponding postfix expression is "ab+c*de/-".

