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

    switch(op)
    {
        case '+' : cout << "a + b is " << a + b << endl; break; 
        case '-' : cout << "a - b is " << a - b << endl; break;
        case '*' : cout << "a * b is " << a * b << endl; break;
        case '/' : cout << "a / b is " << a / b << endl; break;
        default  : cout << "enter valid operation";
    }
    return 0;
}
