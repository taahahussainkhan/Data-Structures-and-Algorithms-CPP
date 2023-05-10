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
node *reverse(node *head)
{
    node *current = head;
    node *previous = NULL;
    node *nextptr;
    while (current != NULL)
    {
        nextptr = current->next;
        current->next = previous;
        previous = current;
        current = nextptr;
    }
    return previous; // new head
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
    cout << "Reversed Linked List: " << endl;
    node *newhead = reverse(head);
    display(newhead);
}