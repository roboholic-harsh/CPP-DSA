#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter your age : ";
    cin >> age;
    
    if(age >= 18)
    {
        cout << "can vote\n";
    }
    if(age >= 60)
    {
        cout << "you are sinior citizen\n";
    }
    return 0;
}