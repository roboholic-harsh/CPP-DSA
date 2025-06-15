// basic calculator using if
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    char op;
    cout << "enter operation with giving space." << endl;
    cout << "example : 12 + 15" << endl;
    cout << "enter operation : ";
    cin >> a >> op >> b;

    if(op == '+')
    {
        cout << "a + b is " << a + b << endl; 
    }
    else if(op == '-')
    {
        cout << "a - b is " << a - b << endl; 
    }
    else if(op == '*')
    {
        cout << "a * b is " << a * b << endl; 
    }
    else if(op == '/')
    {
        cout << "a / b is " << a / b << endl; 
    }
    else 
    {
        cout << "enter valid operation";
    }
    return 0;
}
