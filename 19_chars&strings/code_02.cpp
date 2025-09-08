#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name[50];
    // cin >> name; // ignore charactors after white spaces
    cin.getline(name, 50, '*'); // this will fatch all latters upto 50 or * it will not cunsider enter if you dont use * in the string
    
    cout << "name is " << name << endl;
    cout << "length = "<< strlen(name) << endl;

    return 0;
}