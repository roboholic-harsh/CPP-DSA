#include <iostream>
using namespace std;

int  factorial(int n)
{
    int fact = 1; // this is compulsary
    for(int i = 1; i <=n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    cout << " factorial = " << factorial(4) << endl;

}