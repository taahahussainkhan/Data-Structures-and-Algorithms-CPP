#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int,6> arr = {1,2,3,4,5,6};
    for(int x:arr)
        cout<<x<<" ";
    cout<<endl;
    cout << "Size: " <<arr.size()<<endl;
    cout<<"Empty or Not: " << arr.empty()<<endl;
    cout <<"First Element: "<<arr.front()<<endl;
    cout <<"Last Element: "<<arr.back()<<endl;
    cout <<"Element at 3rd Index: "<<arr.at(3)<<endl;
    cout <<"Element at 3rd Index: "<<arr[3]<<endl;
    cout <<"Element at 3rd Index: "<<get<3>(arr)<<endl;
    return 0;
}