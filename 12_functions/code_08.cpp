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

int main()
{
    cout << "1 >" << is_prime(1) << endl;
    cout << "2 >" << is_prime(2) << endl;
    cout << "3 >" << is_prime(3) << endl;;
    cout << "4 >" << is_prime(4) << endl;;
    cout << "5 >" << is_prime(5) << endl;;

    cout << "6 >" << is_prime(6) << endl;;
    cout << "7 >" << is_prime(7) << endl;;
    cout << "8 >" << is_prime(8) << endl;;
    cout << "9 >" << is_prime(9) << endl;;
    cout << "10 >" << is_prime(10) << endl;;

    return 0;
}