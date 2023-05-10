#include <iostream>
using namespace std;
class Stack
{
	int top;
	int *arr;
	int size;

public:
	Stack()
	{
		top = -1;
		arr = new int[10];
		size = 10;
	};
	Stack(int size)
	{
		this->size = size;
		top = -1;
		arr = new int[size];
	}
	bool isEmpty()
	{
		return top == -1;
	}
	bool isFull()
	{
		return top == 10;
	}
	void push(int value)
	{
		if (!isFull())
		{
			top++;
			arr[top] = value;
			cout << value << " pushed successfully to the stack! " << endl;
		}
		else
			cout << "Stack Overflow!" << endl;
	}
	int pop()
	{
		if (!isEmpty())
		{
			int popValue = arr[top];
			arr[top] = 0;
			top--;
			return popValue;
		}
		else
			cout << "Stack Underflow!" << endl;
	}
	void display()
	{
		for (int i = 0; i <= top; i++)
			cout << arr[i] << endl;
	}
	void peek(int position)
	{
		if (!isEmpty())
			cout << "Stack value at" << position << " : " << arr[position] << endl;
		else
			cout << "Stack Underflow!" << endl;
	}
	void change(int position, int value)
	{
		arr[position] = value;
		cout << "Value changed!" << endl;
	}
	int count()
	{
		return top + 1;
	}
};
void menu(int size)
{
	Stack s(size);
	int opt, value, position;
	char ask;
	do
	{
		cout << "| -> Wanna Push. " << endl;
		cout << "| -> Wanna Pop. " << endl;
		cout << "| -> Is stack Full? " << endl;
		cout << "| -> Is stack Empty? " << endl;
		cout << "| -> Wanna change a value? " << endl;
		cout << "| -> Wanna peek into stack? " << endl;
		cout << "| -> Wanna see? " << endl;
		cin >> opt;
		switch (opt)
		{
		case 1:
			cout << "Value to push: ";
			cin >> value;
			s.push(value);
			cout << "Stack : " << endl;
			s.display();
			break;
		case 2:
			s.pop();
			cout << "Stack : " << endl;
			s.display();
			break;
		case 3:
			if (s.isFull())
				cout << "Yes! The Stack is Full! " << endl;
			else
				cout << "No! The Stack is Not Full! " << endl;
		case 4:
			if (s.isEmpty())
				cout << "Yes! The Stack is Empty! " << endl;
			else
				cout << "No! The Stack is Not Empty! " << endl;
			break;
		case 5:
			cout << "Position : ";
			cin >> position;
			cout << "Value : ";
			cin >> value;
			s.change(position, value);
			cout << "\n Value changed! " << endl;
			s.display();
			break;
		case 6:
			cout << "Position : ";
			cin >> position;
			s.peek(position);
			break;
		case 7:
			s.display();
			break;
		}
		cout << "Wanna perform another operation?";
		cin >> ask;
		if (ask == 'y' || ask == 'Y')
			continue;
		else
			break;
	} while (true);
}
int main()
{
	int size;
	cout << "Size of Stack: ";
	cin >> size;
	menu(size);
}