#include<iostream>
#include<set>
using namespace std;
int main()
{
    // Set is a container that stores unique elements following a specific order.
    // At back-end, set is implemented as a balanced binary search tree.
    set <int> arr = {1,2,3,4,5,6};
    for(int x:arr)
        cout<<x<<" ";
    cout<<endl;
    arr.insert(7);
    arr.insert(0);
    cout << "Size: " <<arr.size()<<endl;
    cout<<"Empty or Not: " << arr.empty()<<endl;
    cout <<"First Element: "<<*arr.begin()<<endl;
    cout <<"Last Element: "<<*arr.rbegin()<<endl;
    cout <<"Element at 3rd Index: "<<*next(arr.begin(),3)<<endl;
    return 0;
}