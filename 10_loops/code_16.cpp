// my logic
#include <iostream>
using namespace std;

int main()
{
    int n, is_prime = 1;
    cout << "enter number : ";
    cin >> n;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            is_prime = 0;
            break;
        }
    }

    if(is_prime)
    {
        cout << n << " is prime number.";
    }
    else
    {
        cout << n << " is composite number."; 
    }

    return 0;
}