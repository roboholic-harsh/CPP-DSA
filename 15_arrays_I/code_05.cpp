#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter length of array you want : ";
    cin >> n;

    int marks[n];
    
    // loop input
    cout << "enter numbers saperate with space.\n";
    for(int i = 0; i < n; i++ )
    {
        cin >> marks[i];
    }


    // loop output
    for(int i = 0; i < n; i++)
    {
        cout << marks[i] << ", ";
    }
    cout << endl;

}