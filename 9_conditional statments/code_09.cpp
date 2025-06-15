// ternary operator
#include <iostream>
using namespace std;

int main()
{
    bool  isAdult;
    int age;
    cout << "enter age : ";
    cin >> age;

    // syntax 1
    isAdult = (age >= 18) ? true : false;

    // syntax 2
    // if(age >= 18)
    // {
    //     isAdult = true;
    // }
    // else
    // {
    //     isAdult = false;
    // }

    // these all two syntax are same

    cout << isAdult << endl;
    return 0;
}