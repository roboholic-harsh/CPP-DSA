#include <iostream>
using namespace std;

int main()
{
    int n = 0, nm1 = 1, np1;
    cout << n << endl << nm1 << endl;
    for(int i = 0; i < 10 ;i++)
    {
        np1 = nm1 + n;
        n = nm1;
        nm1 = np1;
        cout << np1 << endl;
    }
}