#include<iostream>
using namespace std;
int factorial(int n){
    //Base Case
    if(n==0)
        return 1;
    //Recursive Case
    int fact=n*factorial(n-1);
    return fact;
}
int main()
{
    int n;
    cin >> n;
    cout<<factorial(n)<<endl;
}

/*
                Recursion = Principal of Mathematical Induction

                1-> Figure out the smallest case.
                2-> Always assume the subproblem can be solved.
                3-> Solve the current problem assuming the subproblem can be solved.
*/