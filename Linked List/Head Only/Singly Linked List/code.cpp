#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node* &head,int data) // passing head by reference because we are modifying the linked list not cloning.
{
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}
void insertAtTail(Node* &head,int data)
{
    Node* n = new Node(data);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}
void insertAtPosition(Node* &head,int data,int position)
{
    Node* temp = head;
    int count = 1;
     if (position == 1)
    {
         insertAtHead(head,data);
         return;
    }
    while(count < position-1)
    {
        temp = temp->next;
        count++;
    }
    Node* n =  new Node(data);
    n->next =  temp->next;
    temp->next = n;
}
void display(Node* &head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node* head = NULL;
    cout << "insertAtHead(head,0)" << endl ;
    insertAtHead(head,0);
    display(head);
    cout << endl;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,6);
    insertAtTail(head,9);
    cout << "insertAtTail(head,1)\n insertAtTail(head,2)\ninsertAtTail(head,6)\ninsertAtTail(head,9)" << endl ;
    display(head);
    cout << endl;
    cout << "insertAtHead(head,0)" << endl ;
    insertAtPosition(head,3,1);
    display(head);
    cout << endl;
    return 0;
}