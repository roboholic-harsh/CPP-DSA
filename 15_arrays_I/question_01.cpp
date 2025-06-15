#include <iostream>
using namespace std;

int main()
{
    int a  = 2;
    int &b = a;

    b = 3;
    cout << a;
}