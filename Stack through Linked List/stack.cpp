#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    next = NULL;
  }
};

void insertAtTail(Node *&head, int data) {
  Node *n = new Node(data);
  if (head == NULL) {
    head = n;
    return;
  }

  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }

  temp->next = n;
}

void insertAtHead(Node *&head, int data) {
  Node *n = new Node(data);
  n->next = head;
  head = n;
}
class stack{
    int data;
    Node *head = NULL;
public:
void push(Node *&head, int data) {
  insertAtHead(head, data);
}

int pop(Node *&head) {
  if (head == NULL) {
    return -1;
  }

  int data = head->data;
  head = head->next;
  return data;
}
int peek(Node *head) {
  if (head == NULL) {
    return -1;
  }

  return head->data;
}
void printStack(Node *head) {
  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}
};
int main() {
Node *head = NULL;
stack s;
  s.push(head, 10);
  s.push(head, 20);
  s.push(head, 30);

  s.printStack(head);

  int data = s.pop(head);
  cout << "Popped: " << data << endl;

  s.printStack(head);
  return 0;
}
