#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector< vector<int> > arr = {{1,2,3},{4,5,6},{7,8,9},{3,6,1,5}}; // 2d vector
    //Similar to 2d array but it is dynamic and number of rows can be different.
    cout << arr.size() << endl; // arr.size() gives the number of rows

    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++) // arr[i].size() gives the number of columns in the ith row
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // OR
    cout << "With for each loop" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
       for(int j : arr[i])
       {
           cout << j << " ";
       }
       cout << endl;
    }
    
}