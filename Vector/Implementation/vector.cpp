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
    bool isEmpty()
    {
        return cs == 0;
    }
    //Front, Back, At(i), []

    int front()
    {
        return arr[0];
    }
    int back()
    {
        return arr[cs-1];
    }
    int at(int i)
    {
        return arr[i];
    }
    int size()
    {
        return cs;
    }
    int capacity()
    {
        return ms;
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
}