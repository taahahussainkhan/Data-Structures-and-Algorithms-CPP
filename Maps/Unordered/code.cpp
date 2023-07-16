#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> ump;

    //Insertion Methods
    //1
    pair <string,int> p = make_pair("Day",12);
    ump.insert(p);
    
    //2
    pair <string,int> p2("Month",8);
    ump.insert(p2);

    //3
    ump["year"] = 2002;

    //4
    ump.insert(make_pair("age",19));

    //Accessing Methods
    //1
    cout << ump["Day"]<<endl; //If the key is not present then it will insert the key with value 0.
    //2
    cout << ump.at("Month")<<endl; //at() function is same as [] operator but it throws an error if the key is not present.
    
    //Deletion Methods
    //1
    ump.erase("age"); //It will erase the key value pair corresponding to the key.
    //2
    ump.erase(ump.begin()); //It will erase the first key value pair.
    //3
    ump.erase(ump.begin(),ump.end()); //It will erase all the key value pairs.
    



    //Count
    //count function tells if there is any value corresponding to the key.
    // It returns:
    // 1 if the key is present.
    // 0 if the key is not present.
    cout << ump.count("year")<<endl;



}