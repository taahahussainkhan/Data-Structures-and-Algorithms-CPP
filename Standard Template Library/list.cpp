#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> arr = {1,2,3,4,5,6};
    for(int x:arr)
        cout<<x<<" ";
    cout<<endl;
    arr.push_back(7);
    arr.push_front(0);
    cout << "Size: " <<arr.size()<<endl;
    cout<<"Empty or Not: " << arr.empty()<<endl;
    cout <<"First Element: "<<arr.front()<<endl;
    cout <<"Last Element: "<<arr.back()<<endl;
    // cout <<"Element at 3rd Index: "<<get<3>(arr)<<endl;
    return 0;
}