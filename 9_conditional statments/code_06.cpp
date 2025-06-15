#include <iostream>
using namespace std;

int main()
{
    int marks = 90;
    cout << "enter marks : ";
    cin >> marks;

    if(marks > 100 || marks < 0)
    {
        cout << "enter valid marks.";
    }
    else if(marks > 80)
    {
        cout << "grade : A";
    }
    else if(marks > 60)
    {
        cout << "grade : B";
    }
    else if(marks > 33)
    {
        cout << "grade : C";
    }
    else
    {
        cout << "FAIL";
    }
    return 0;
}