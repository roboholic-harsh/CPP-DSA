#include <iostream>
using namespace std;

 int main()
 {
    int n;
    cout << "enter number : ";
    cin >> n;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
 }