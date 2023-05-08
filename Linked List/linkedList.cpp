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
bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main()
{
    node *head = NULL;
    int no_of_nodes, value;
    cout << "Number of Nodes: ";
    cin >> no_of_nodes;
    for (int i = 0; i <= no_of_nodes; i++)
    {
        char insert;
        cout << "Where do you want ot insert value? ";
        cout << "h/H OR t/T" << endl;
        cin >> insert;
        if (insert == 't' || insert == 'T')
        {
            cout << "Value : ";
            cin >> value;
            insertAtTail(head, value);
        }
        else if (insert == 'h' || insert == 'H')
        {
            cout << "Value : ";
            cin >> value;
            insertAtTail(head, value);
        }
    }
    display(head);
    int key;
    cout << "Value to search: ";
    cin >> key;
    if( search(head, key))
        cout << key << " Found" << endl;
    else 
    cout << key <<" Not Found " << endl ;
}