#include <iostream>
#define SIZE 10
using namespace std;
class Stack
{
    int *arr;
    int size;
    int top =-1;

public:
    Stack()
    {
        arr = new int[SIZE];
    }
    Stack(int size)
    {
        this -> size = size;
        arr = new int [size];

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
        if(!isFull())
        {
            top++;
            arr[top] = value;
        }
        else
            cout<<"Stack Overflow!"<<endl;
    }
    int pop()
    {
        if(!isEmpty())
        {
            int p = arr[top];
            top-- ;
            return p;
        }
        else
            cout<<"Stack Underflow!"<<endl;
    }
    void display()
    {
        cout<<"Current Stack: "<<endl;
        for (int i = 0; i <= top; i++)
        {
           cout << arr[i] << " " ;
                   }
        
    }
}; 
int main()
{
  
    s.display();
}