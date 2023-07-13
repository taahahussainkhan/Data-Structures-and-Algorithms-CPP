#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
void insertAtHead(Node* &head,int data)
{
    Node* n = new Node(data);
    Node* temp = head;
    if(head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}
void insertAtTail(Node* &head,int data)
{
    Node* temp = head;
    if(head==NULL)
    {
        insertAtHead(head,data);
        return;
    }
    Node* n = new Node(data);
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next = n;
    n->next = head;
}
void display(Node* head)
{
    Node* temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp!=head);
}
int main()
{
    Node* head =  NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtHead(head,3);
    display(head);
}