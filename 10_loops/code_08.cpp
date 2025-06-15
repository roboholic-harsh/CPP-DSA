#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number  : ";
    cin >> n;
    int sum_of_digits = 0, last_digit = 0;

    while(n > 0)
    {
        last_digit = n % 10;
        n = n / 10;
        if(last_digit % 2 == 1)
        {
            sum_of_digits = sum_of_digits + last_digit;
        }
    }
    cout << sum_of_digits << endl ; 
    return 0;
}