#include <iostream>
using namespace std;


int main()
{
    int a = 25;
    int &b = a;
    cout << a << " = " << b << endl;

    b = 50;
    cout << a << " = " << b << endl;


    return 0;
}