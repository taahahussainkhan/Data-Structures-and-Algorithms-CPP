#include <iostream>
using namespace std;
class Node
{
public:
    int key;
    int data;
    Node *next;
    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int key, int data)
    {
        this->key = key;
        this->data = data;
    }
};
class SinglyLinkedList
{
public:
    Node *head;
    SinglyLinkedList()
    {
        head = NULL ;
    }
    SinglyLinkedList(Node *n)
    {
        this->head = n ;
    }
    Node nodeExists(int k)
    {
        Node* temp = NULL;
        Node* ptr = head;
        while (ptr != NULL)
        {
             if (ptr->key == k)
             {
                temp = ptr ; 
             }
        }
    }

};
int main()
{
}