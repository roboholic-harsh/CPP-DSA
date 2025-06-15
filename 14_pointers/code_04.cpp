#include <iostream>
using namespace std;

int main()
{
    int a;
    int *ptr = &a;
    int **pptr = &ptr;

    cout << a << endl << ptr << endl << pptr << endl;

    cout << "&ptr = " << &ptr << endl;
    cout << "pptr = " << pptr << endl;

    return 0;
}