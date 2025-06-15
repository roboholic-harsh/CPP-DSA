#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number  : ";
    cin >> n;
    int  last_digit = 0;

    while(n > 0)
    {
        last_digit = n % 10;
        cout << last_digit;
        n /= 10;
    }
    cout << endl ; 
    return 0;
}