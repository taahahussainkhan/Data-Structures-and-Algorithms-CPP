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
    if(head == NULL)
    {
        insertAtHead(head,data);
        return;
    }
    
}
void print(Node* &head)
{
    Node* temp = head;
    if (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    cout<<"Hello World";
    return 0;
}