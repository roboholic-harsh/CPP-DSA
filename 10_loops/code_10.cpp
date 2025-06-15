#include <iostream>
using namespace std;

int main()
{
    int n, result = 0;;
    cout << "enter number  : ";
    cin >> n;

    int  last_digit = 0;

    while(n > 0)
    {
        
        last_digit = n % 10;
        n /= 10;

        result = result * 10 + last_digit;
        
    }
    cout << result  << endl ; 
    return 0;
}