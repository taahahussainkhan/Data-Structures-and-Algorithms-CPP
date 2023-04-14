#include<iostream>
using namespace std;
class Queue {
    int* arr;
    int front;
    int rear;
    int size;  //Size for dynamic array
public:
    //Default constructor
    Queue()
    {
        rear=-1;
        front=-1;
        arr= new int[10];
    }
    //Parametrized Constructor
    Queue(int size)
    {
        this->size=size;
        front=-1;
        rear=-1;
        arr = new int[size];
    }
    //Function to check if the Queue is full or not.
    bool isFull()
    {
        return rear==size;
    }
    bool isEmpty()
    {
        return rear == -1 && front == -1 ;
    }
    //enQueue function to perform enqueue operation on queue.
    void enQueue(int value)
    {
        if(isFull())
            cout<<"Queue Overflow!"<<endl;
        else if(isEmpty())
            rear=front=0;
        else 
            rear++;
        arr[rear]=value;
    }
    int deQueue()
    {
        int dq;
        if(isEmpty())
            cout<<"Queue Underflow!"<<endl;
        
        else if(rear==front)//Only first case when rear and front will be incremented, this step is applicable only first time.
        {
            dq= arr[rear];
            rear=-1;
            front=-1;
            return dq;
        }
        else
        {
            dq=arr[front];
            arr[front]=0;
           front++;
            return dq;
        }
       
    }
    void display()
    {
        for(int i=0;i<=rear;i++)
            cout<<arr[i]<<" ";
    }

};
int main()
{

    Queue q(10);
    q.enQueue(23);
    q.enQueue(16);
    q.enQueue(97);
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.display();
    system("pause");
    return 0;
}