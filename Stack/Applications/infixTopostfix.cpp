#include <iostream>
#include <string>
#define SIZE 10
using namespace std;
int precedence(char o);
class Stack
{
    int *arr;
    int size;
    int top = -1;

public:
    Stack()
    {
        arr = new int[SIZE];
    }
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
    }
    bool isEmpty()
    {
        return top == -1;
    }
    bool isFull()
    {
        return top == size;
    }
    void push(int value)
    {
        if (!isFull())
        {
            top++;
            arr[top] = value;
        }
        else
            cout << "Stack Overflow!" << endl;
    }
    int pop()
    {
        if (!isEmpty())
        {
            int p = arr[top];
            top--;
            return p;
        }
        else
            cout << "Stack Underflow!" << endl;
    }
    int topv()
    {
        return arr[top];
    }
    void display()
    {
        cout << "Current Stack: " << endl;
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    string infix, postfix[30];
    cout << "Enter an infix expression: ";
    cin >> infix;
    Stack s(30);
    int size1 = infix.size();
    for (int i = 0; i < size1; i++)
    {
        if (infix[i] == '(')
        {
            s.push(infix[i]);
        }
        else if (infix[i] >= 'a' && infix[i] <= 'z')
        {
            cout << infix[i];
        }
        else if (infix[i] == ')')
        {
            if (infix[i] != '(')
                s.pop();
        }
        else if ((infix[i] == '+') || (infix[i] == '-') || (infix[i] == '*') || (infix[i] == '/'))
        {
            if (s.isEmpty())
            {
                s.push(infix[i]);
            }
            else if(precedence(infix[i]) > precedence(s.topv()))
            {
                s.push(infix[i]);
            }
            else if (precedence(infix[i]) == precedence(s.topv()) || infix[i] == '^')
            {
                s.push(infix[i]);
            }
           else
				{
					while((!s.isEmpty())&&( precedence(infix[i])<=precedence(s.topv())))
					{
						postfix[i] += s.topv();
						s.pop();
					}
					s.push(infix[i]);
				}
        }
    }
     while(!s.isEmpty())
    {
        postfix[size1++] = s.topv();
        s.pop();
    }

    for(int i = 0; i < size1; i++)
    {
        cout<<postfix[i];
    }
    cout<<endl;
    return 0;
}
int precedence(char o)
{
    if (o == '+' || o == '-') return 2;
    else if (o == '*' || o == '/') return 1;
    else    return -1;
}