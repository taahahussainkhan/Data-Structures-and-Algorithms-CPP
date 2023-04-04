#include <iostream>
using namespace std;
class Stack
{
protected:
    int *arr;
    int currentSize;
    int maximumSize;

public:
    Stack()
    {
        maximumSize = 10;
        currentSize = 0;
        arr = new int[maximumSize];
    }
    Stack(int s)
    {
        maximumSize = s;
        currentSize = 0;
        arr = new int[maximumSize];
    }
    virtual void push(int n) = 0;
    virtual int pop() = 0;
    virtual void display() = 0;
};
class myStack : public Stack
{
public:
    myStack() : Stack()
    {
    }
    myStack(int s) : Stack(s)
    {
    }
    void push(int n)
    {
        arr[currentSize] = n;
        currentSize++;
    }
    int pop()
    {
        currentSize--;
        return arr[currentSize];
    }
    void display()
    {
        cout << "Maximum Size: " << maximumSize << endl;
        cout << "Current Size: " << currentSize << endl;
        cout << "Values: " << endl;
        for (int i = 0; i < currentSize; i++)
            cout << arr[i] << " ";
    }
};
int main()
{
    myStack s(20);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << s.pop();
    cout << s.pop();
    cout << s.pop();
    s.display();
}