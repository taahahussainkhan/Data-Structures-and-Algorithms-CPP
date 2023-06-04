#include <iostream>
using namespace std;
class vector
{
    // Data Members
    private:
    int* arr;
    int cs; // Current Size
    int ms; // Max Size

    // Methods
    public:
    vector() // This is how a vector looks like initially.
    {
        cs = 0;
        ms = 1;
        arr = new int[ms];
    }
       vector(int maxSize) {
        cs = 0;
        ms = maxSize;
        arr = new int[ms];
    }
    void push_back(int d)
    {
        // Two cases
        if (cs == ms)
        {
            // Create a new array and delete the old one, double the capacity
            int* oldArr = arr;
            ms = 2*ms;
            arr = new int[ms];
            // Copy the elements
            for(int i=0;i<cs;i++)
            {
                arr[i] = oldArr[i];
            }
            // Delete the old array
            delete [] oldArr;
        }
        arr[cs] = d;
        cs++;
    }
    void pop_back()
    {
        if(cs >= 0)
        {
            cs--;
        }
    }
    bool isEmpty()const // const is used so that the function cannot change the value of cs
    {
        return cs == 0;
    }
    //Front, Back, At(i), []

    int front()const
    {
        return arr[0];
    }
    int back() const
    {
        return arr[cs-1];
    }
    int at(int i) const
    {
        return arr[i];
    }
    int size() const
    {
        return cs;
    }
    int capacity()const
    {
        return ms;
    }
    int operator[](const int i)
    {
        return arr[i];
    }

};
int main()
{
    vector v;
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