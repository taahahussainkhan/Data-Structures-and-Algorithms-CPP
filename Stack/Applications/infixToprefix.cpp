#include<iostream>
#include<string>
#include<stack>
using namespace std;
int precedence(char oper)
{
    if (oper == '^')
        return 3;
    else if (oper == '*' || oper == '/')
        return 2;
    else if (oper == '+' || oper == '-')
        return 1;
    else
        return -1;  
} 
void reverse(string &infix)
{
     int n = infix.length();
    for (int i = 0; i < n / 2; i++) {
        char temp = infix[i];
        infix[i] = infix[n - i - 1];
        infix[n - i - 1] = temp;
    }

}
string InfixToPrefix(string infix)
{
    reverse(infix);
    stack<char> s;

    string prefix ;
    for(int i=0;i<infix.length();i++)
    {
        if((infix[i] >= 'a' && infix [i] <= 'z') || (infix[i] >= 'A' && infix [i] <= 'Z'))
        {
                prefix += infix[i]; 
        }
        else if(infix[i] == ')')
            s.push(infix[i]);
        else if(infix[i] == '(')
        {
            while(!s.empty() && s.top()!=')'){
                prefix += s.top();
                s.pop();
            }
            if(!s.empty())
                s.pop();
        }
        else{
            while(!s.empty() && precedence(infix[i]) <= precedence(s.top()))
            {
                prefix += s.top();
                s.pop();
            }
            s.push(infix[i]);
        }
    }
    while(!s.empty())
    {
        prefix += s.top();
        s.pop();
    }
    reverse(prefix);
    // for(int i=0;i<prefix.length();i++)
    // {
    //     if(prefix[i]==')')
    //         prefix[i]='(';
    //     else if(prefix[i]=='(')
    //         prefix[i]=')';
    // }
    return prefix;
}
int main()
{
    string s = "(a-b/c)*(a/k-l)";
   cout << InfixToPrefix(s);
    //cout << s << endl;
}