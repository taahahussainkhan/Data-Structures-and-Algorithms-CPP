#include <iostream>
#include "vector.h" // User defined header file
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(10);
    cout <<v.size() << endl;
    cout << v.capacity() << endl;
    cout<<"First element "<<v.front()<<endl;
    cout<<"Last element "<<v.back()<<endl;
    cout<<"Element at 2nd index "<<v.at(2)<<endl;
    for(int x=0 ;x < v.size();x++)
    {
        cout << v.at(x) << " ";
    }
    cout << "\nUsing operator overloading " << endl;
    for(int x=0 ;x< v.size();x++)
    {
        cout << v[x] << " ";
    }
}