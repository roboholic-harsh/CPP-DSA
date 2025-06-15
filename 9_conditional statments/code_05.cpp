//pass fail

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "enter two numbers";
    cin >> a >> b;
    if(a > b)
    {
        cout << "a is bigger";
    }
    else if(a < b)
    {
        cout << "b is bigger";
    }
    else
    {
        cout << "both are equal";
    }
    return 0;
}