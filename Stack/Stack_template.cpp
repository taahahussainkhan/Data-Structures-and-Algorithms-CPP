#include<iostream>
using namespace std;
template <class type>
class Stack {
    int top;
    type* arr;
    int size;
public:
    Stack(){
            top=-1;
            arr=new type[10];
            size=10;
    };
    Stack(int size)
    {
        this->size=size;
        top=-1;
        arr=new type[size];
    }
    bool isEmpty()
    {
        return top==-1;
    }
    bool isFull()
    {
        return top==10;
    }
    void push(type value)
    {
        if(!isFull())
        {
            top++;
            arr[top]=value;
           
        }
        else
        cout<<"Stack Overflow!"<<endl;
    }
    int pop()
    {
        if(!isEmpty())
        {
            type popValue=arr[top];
            arr[top]=0;
            top--;
            return popValue;
             
        }
        else
        cout<<"Stack Underflow!"<<endl;
    }
    void display()
    {
        for(int i=0;i<=top;i++)
        cout<<arr[i]<<endl;
    }
    int peek(int position)
    {
        if(!isEmpty())
            return arr[position];
        else
            cout<<"Stack Underflow!"<<endl;
    }
    void change(int position,type value)
    {
        arr[position]=value;
        cout<<"Value changed!"<<endl;
    }
    int count()
    {
        return top+1;
    }
};
int main ()
{
    Stack<int> s(7);
    s.push(5);
    s.push(3);
    s.push(4);
    s.push(1);
    s.pop();
    s.display();
    Stack<char> s1(7);
    s1.push('3');
    s1.push('f');
    s1.push('d');
    s1.push('v');
    s1.pop();
    s1.display();
   
}