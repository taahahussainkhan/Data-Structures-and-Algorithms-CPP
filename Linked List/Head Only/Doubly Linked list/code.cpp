#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* previous;
    Node(int data){
        this->data=data;
        next=NULL;
        previous=NULL;
    }
};
void insertAtHead(Node* &head,int data)
{
    Node* n  = new Node(data);
    n-> next = head;
    if(head!=NULL)head->previous = n;
    head = n;
}
void insertAtTail(Node* & head,int data)
{
    Node* temp = head;
    if(head==NULL)
    {
        insertAtHead(head,data);
        return;
    }
    Node* n  = new Node(data);
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->previous = temp;

}
void display(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    Node* head = NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
}