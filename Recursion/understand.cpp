#include<iostream>
using namespace std;
void reachHome(int source,int destination)
{
    cout<< "Source : " << source << " Destination : " << destination << endl;
    // Base Case
    if(source == destination) 
    {
        cout << "Reached Home !" << endl ;
        return;
    }
    source++; // One step towards home.
    reachHome(source,destination);  // Recursive Call 
}
int main()
{
    int source,destination;
    cout << "Enter source: ";
    cin>>source;
    cout << "Enter destination: ";
    cin >> destination;
    reachHome(source,destination);
}