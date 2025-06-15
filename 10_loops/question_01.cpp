#include <iostream>
using namespace std;

int main()
{
    int n,i = 1, fact = 1;
    cout << "enter number : ";
    cin >> n;
    while(i <= n)
    {
        fact = fact * i;
        i++;
    }
    cout << "factorial of " << n << " is " << fact;

    return 0;
}