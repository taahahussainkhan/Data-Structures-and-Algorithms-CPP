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
void deleteFirstNode(Node* &head)
{
    Node* todelete = head;
    head = head->next;
    head->previous = NULL;
    delete todelete;
}
void toDelete(Node* &head,int position)
{
    Node* temp = head;
    int count = 1;
    if (position == 1)
    {
        deleteFirstNode(head);
        return;
    }
    while(temp != NULL & count != position)
    {
        temp = temp->next;
        count++;
    }
    temp->previous->next = temp->next;
    if(temp->next != NULL) temp->next->previous = temp->previous;
    delete temp;
}
void display(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout << endl ;
}
int main()
{
    Node* head = NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    toDelete(head,2);
    display(head);
    toDelete(head,1);
    display(head);
}