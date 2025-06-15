#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "enter number btw 1 to 7 : ";
    cin >> day;

    switch(day)
    {
        case 1 : cout << "Monday";
            break;
        case 2 : cout << "Tuesday";
            break;
        case 3 : cout << "wednesday";
            break;
        case 4 : cout << "Thursday";
            break;
        case 5 : cout << "friday";
            break;
        case 6 : cout << "saturday";
            break;
        case 7 : cout << "sunday";
            break;
        default : cout << "invalid number";
    }
    return 0;
}