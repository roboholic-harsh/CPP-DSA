// largest of three
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "enter three numbers : ";
    cin >> a >> b >> c;

    if(a >= b && a >= c)
    {
        cout << a <<" is largest";
    }
    else if(b >= c)
    {
        cout << b <<" is largest";
    }
    else
    {
        cout << c << "is largest";
    }
    return 0;
}