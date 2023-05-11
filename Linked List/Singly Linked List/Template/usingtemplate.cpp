#include <iostream>
using namespace std;
template <typename type>
class node
{
public:
    type data;
    node<type> *next;
    node(type value)
    {
        data = value;
        next = NULL;
    }
};
template <typename type>
void insertAtTail(node<type>* &head, type val)
{
    node<type> *n = new node<type>(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node<type> *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
template <typename type>
void insertAtHead(node<type> *&head, int val)
{
    node<type> *n = new node<type>(val);
    n->next = head;
    head = n;
}
template <typename type>
void display(node<type> *head)
{
    node<type> *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << " NULL " << endl;
}
template <typename type>
bool search(node<type> *head, int key)
{
    node<type> *temp = head;
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
template <typename type>
void deleteAtHead(node<type> *&head)
{
    node<type> *toDelete = head;
    head = head->next;
    delete toDelete;
}
template <typename type>
void deletion(node<type> *&head, int val)
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
    node<type> *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node<type> *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
template <typename type>
node<type>* reverse (node<type>* head)
{
    node<type>* current = head;
    node<type>* previous = NULL;
    node<type>* nextptr ;
    while(current != NULL)
    {
        nextptr = current->next;
        current-> next =previous;
        previous = current;
        current = nextptr;
    }
    return previous;  //new head
}
template <typename type>
void midValue(node<type>* head)
{
  if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    node<type>* slow = head;
    node<type>* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "Mid value: " << slow->data << endl;
}
int main()
{
    node<int> *head = NULL;
    int no_of_nodes;
    int value;
    cout << "Number of Nodes: ";
    cin >> no_of_nodes;
    for (int i = 0; i < no_of_nodes; i++)
    {
      //  char insert;
       // cout << "Where do you want ot insert value? ";
     //   cout << "h/H OR t/T" << endl;
       // cin >> insert;
        //if (insert == 't' || insert == 'T')
       // {
           cout << "Value : ";
             cin >> value;
            insertAtTail(head, value);
   //     }
        //else if (insert == 'h' || insert == 'H')
       // {
         //   cout << "Value : ";
       //     cin >> value;
        //    insertAtTail(head, value);
       // }
    }
    display(head);
    midValue(head);
    int key, toDel;
    char oper;
    do
    {
        cout << "Operations" << endl;
        cout << "Search S/s" << endl;
        cout << "Deletion D/d" << endl;
        cout << "Reverse R/r" << endl;
        cin >> oper;
        if (oper == 'S' || oper == 's')
        {
            cout << "Value to search: ";
            cin >> key;
            if (search(head, key))
                cout << key << " Found" << endl;
            else
                cout << key << " Not Found " << endl;
        }
        else if (oper == 'D' || oper == 'd')
        {
            cout << "Value to delete: ";
            cin >> toDel;
            deletion(head, toDel);
            display(head);
        }
        else if (oper == 'R' || oper == 'r')
        {
            node<int>* newhead = reverse(head);

            display(newhead);
        }
        else
            exit(0);
    } while (1);
}