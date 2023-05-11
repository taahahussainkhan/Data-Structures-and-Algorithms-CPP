#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << " NULL " << endl;
}
void deleteAtHead(node *&head)
{
    node *toDelete = head;
    head = head->next;
    delete toDelete;
}
void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        cout << "List is Empty! " << endl;
        return;
    }
    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
int main()
{
    node *head = NULL;
    int no_of_nodes, value;
    cout << "Number of Nodes: ";
    cin >> no_of_nodes;
    for (int i = 0; i < no_of_nodes; i++)
    {
        cout << "Value : ";
        cin >> value;
        insertAtTail(head, value);
    }
    display(head);
    int toDel;

    cout << "Value to delete: ";
    cin >> toDel;
    deletion(head, toDel);
    display(head);
}