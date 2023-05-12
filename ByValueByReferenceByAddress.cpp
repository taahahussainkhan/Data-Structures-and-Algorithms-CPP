#include<iostream>
using namespace std;
// Call/Pass by Value
void swapByValue(int x,int y)
{
    int z = x; // A copy of variable is created in the memory.
    x  = y ;
    y = z;
}
// Call/Pass by Reference
void swapByReference(int &x,int &y)
{
    int z = x;  // Alias variables are created on the same address the pass variables were.
    x  = y ;
    y = z;
}
// Call/Pass by Address/Pointer.
void swapByAddress(int *x,int *y)
{
    int z = *x;  // Values are swapped through pointers.
    *x  = *y ;
    *y = z;
}
int main()
{
    int a = 9 , b = 8;
    cout << "By Value : " << endl;
    cout << "Before : " << endl ; 
    cout << "a = " <<a << endl ;
    cout << "b = " << b << endl;
    swapByValue(a,b);
    cout << "After : " << endl ; 
    cout << "a = " << a << endl ;
    cout << "b = " << b << endl;

    cout << "By Reference : " << endl;
    cout << "Before : " << endl ; 
    cout << "a = " <<a << endl ;
    cout << "b = " << b << endl;
    swapByReference(a,b);
    cout << "After : " << endl ; 
    cout << "a = " << a << endl ;
    cout << "b = " << b << endl;

    cout << "By Address : " << endl;
    cout << "Before : " << endl ; 
    cout << "a = " <<a << endl ;
    cout << "b = " << b << endl;
    swapByAddress(&a,&b);
    cout << "After : " << endl ; 
    cout << "a = " << a << endl ;
    cout << "b = " << b << endl;
    
    }