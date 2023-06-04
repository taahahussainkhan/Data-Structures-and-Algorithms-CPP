#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* previous;
    Node(int data)
    {
        this->data = data;
        next = NULL;
        previous = NULL;
    }
};
void insertAtHead(Node* &head, int data)
{

}
void insertAtTail(Node* &head , int data)
{
    if (head == NULL)
    {
        insertAtHead(head , data);
        return ; 
    }
    Node* doubly = new Node(data);
    Node* temp = head;
    while( temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n 
    n-> prev = temp 
    
}