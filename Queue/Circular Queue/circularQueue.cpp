#include <iostream>
using namespace std;
class CircularQueue
{
    int *arr;
    int front;
    int rear;
    int size; // Size for dynamic array
public:
    // Default constructor
    CircularQueue()
    {
        rear = -1;
        front = -1;
        arr = new int[10];
    }
    // Parametrized Constructor
    CircularQueue(int size)
    {
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }
    // Function to check if the Queue is full or not.
    bool isFull()
    {
        return rear == size;
    }
    bool isEmpty()
    {
        return rear == -1 && front == -1;
    }
    // enQueue function to perform enqueue operation on queue.
    void enQueue(int value)
    {
        if (isFull())
            cout << "Queue Overflow!" << endl;
        else if (isEmpty())
            rear = front = 0;
        else
            rear = (rear + 1) % size;
        arr[rear] = value;
    }
    int deQueue()
    {
        int dq;
        if (isEmpty())
            cout << "Queue Underflow!" << endl;

        else if (rear == front) // Only first case when rear and front will be incremented, this step is applicable only first time.
        {
            dq = arr[front]; // As int the case of Queue it's front-in-front-out, so deQueue operation is done athe the front.
            rear = -1;
            front = -1;
            return dq;
        }
        else
        {
            dq = arr[front];
            rear = (rear + 1) % size;
            return dq;
        }
    }
    void display()
    {
        for (int i = 0; i <= rear; i++)
            cout << arr[i] << " ";
    }
};
void menu()
{
    int choice,en,de;
    bool flag=true;
    CircularQueue q(10);
    char oper;
    do{       
    cout<<"Enqueue."<<endl;
    cout<<"Dequeue."<<endl;
    cout<<"Display."<<endl;
    cout<<"Empty."<<endl;
    cout<<"Full."<<endl;
    cin>>choice;
    switch (choice){
        case 1:
        cout<<"Enter value to enqueue: ";
        cin>>en;
        q.enQueue(en);
        break;
        case 2:
        q.deQueue();
        break;
        case 3:
        q.display();
        break;
        case 4:
        if(q.isEmpty())
            cout<<"Queue is empty!"<<endl;
        else
            cout<<"Queue is not empty!"<<endl;
        break;
        case 5:
        if(q.isFull())
            cout<<"Queue is full!"<<endl;
        else
            cout<<"Queue is not full!"<<endl;
        break;
        default:
        cout<<"Wrong Input!"<<endl;
    }
    cout<<"\nDo you want to perform more operations y/n ? ";
    cin>>oper;
    if ( oper == 'y' || oper == 'Y' )
    flag=true;
    else
    flag=false;
    }while(flag);
}
int main()
{
    menu();
    system("pause");
    return 0;
}
