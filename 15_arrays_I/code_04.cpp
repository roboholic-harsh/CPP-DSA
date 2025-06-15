#include <iostream>
using namespace std;

int main()
{
    int marks[25] = {0,1};
    int size = sizeof(marks) / sizeof(int);
    for(int i = 0; i < size; i++)
    {
        cout << marks[i] << "  ";
    }
    cout << endl;

}