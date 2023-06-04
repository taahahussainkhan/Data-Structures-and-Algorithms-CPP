#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr ;// Size = 0
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;
    cout << "arr.push_back(10); " << endl;
    arr.push_back(10); // Size = 1
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    //Print the elements of the vector
    for(int i=0;i<arr.size();i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> new_arr = {1,2,3,4,5,6,7,8,9,10};
    cout << new_arr.size() << endl; // 10
    cout << new_arr.capacity() << endl; // 10

    new_arr.push_back(11);
    cout << new_arr.size() << endl; // 11
    cout << new_arr.capacity() << endl; // It doubles the capacity of the vector so it will be 20

    for(int i=0;i<new_arr.size();i++)
    {
        cout << new_arr[i] << " ";
    }
    cout << endl;
    new_arr.pop_back(); // Removes the last element
    cout << new_arr.size() << endl; // 10
    for(int i=0;i<new_arr.size();i++)
    {
        cout << new_arr[i] << " ";
    }   
    cout << endl;

    vector<int> arr1(10,7); // Size = 10 and all the elements are 7
    for(int i=0;i<arr1.size();i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for(int x:arr1) // For each loop
    {
        cout << x << " ";
    }
    cout << endl;
}