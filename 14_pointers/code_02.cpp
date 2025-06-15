#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    cout << "&a   = " << &a << endl;
    cout << "ptr  = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << "size = " << sizeof(ptr) << endl;
    return 0;
}