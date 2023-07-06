#include<iostream>
using namespace std;
int fibonacci(int n)
{
    // Base Case
    if(n==0)
    {
        return 0;
    }  
    if(n==1)
    {
        return 1;
    }
    // Recursive Case
    return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci of " << n << " is " << fibonacci(n) << endl;
}