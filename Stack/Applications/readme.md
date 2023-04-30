# POSTFIX

## Traverse the infix expression

### Steps to convert Infix expression to a Postfix expression

1. `(` : Push into Stack
2. `Operand` : Print it
3. `)` : Keep popping from stack and print untill `(` is found.
4. `Operator` : If the Stack is Empty, Push it
Else:
    - Compare with the top operator in Stack
       - If higher precedence, push.
       - Else keep popping from the stack and print till lower precedence operator is found.