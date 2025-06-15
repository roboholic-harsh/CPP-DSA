#include <iostream>
using namespace std;

bool is_prime(int n) // prime --> true or not-prime --> false
{
    if(n == 1)  {
        return false;
    }
    for(int i = 2; i * i <= n; i++)  {
        if(n % i == 0)  { // non-prime
            return 0;
        }
    }
    return true;
}

void print_primes(int n)
{
    for(int i = 2; i <= n; i++)
    {
        if(is_prime(i))
        {
            cout << i << ", ";
        }
    }
}

int main()
{
    int n = 0;
    cout << "enter number n : ";
    cin >> n;

    print_primes(n);

    return 0;
}