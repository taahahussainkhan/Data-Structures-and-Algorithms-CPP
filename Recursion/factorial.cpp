#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0)
        return 1;
    return n*factorial(n-1);
}
int main()
{
    cout<<factorial(3)<<endl;
}

/*
                Recursion = Principal of Mathematical Induction

                1-> Figure out the smallest case.
                2-> Always assume the subproblem can be solved.
                3-> Solve the current problem assuming the subproblem can be solved.
*/