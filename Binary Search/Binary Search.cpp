#include<iostream>
using namespace std;
void BinarySearch(int arr[],int key,int);
int main()
{
	int n,key=0;
	cout << "\nEnter the number of values: ";
	cin >> n;
	int* arr = new int[n];
	cout << "Enter Values: ";
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << "Key: ";
	cin >> key;
	BinarySearch(arr, key,n);
}
void BinarySearch(int arr[], int key,int n)
{
	int mid = 0, start = 0, end = n;
	while (start<=end)
	{
		mid = (start + end) / 2;
		if (arr[mid] == key)
		{
			cout << "\nKey found at index " << mid << endl;
			break;
		}
		else if (arr[mid] < key)
		{
			start = mid + 1;
		}
		else
			end = mid - 1;
	}
}