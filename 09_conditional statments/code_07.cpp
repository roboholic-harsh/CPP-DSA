//tax calculator
#include <iostream>

using namespace std;

int main()
{
    int income;
    float tax;
    cout << "enter income in lakhs : ";
    cin >> income;

    if(income <= 5)
    {
        tax = 0;
    }
    else if(income <= 10)
    {
        tax = 0.2 * income;
    }
    else
    {
        tax = 0.3 * income;
    }
    cout << "tax is " << tax * 100000 << ".\n";
    return 0;
}