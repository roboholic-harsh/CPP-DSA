#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int *i_ptr = &i;

    cout << ": integer pointers :" << endl;
    cout << "&i   = " << &i << endl;
    cout << "i_ptr  = " << i_ptr << endl;
    cout << "*i_ptr = " << *i_ptr << endl;
    cout << "size = " << sizeof(i_ptr) << endl;

    cout << "\n\n";

    float f = 3.14;
    float *f_ptr = &f;

    cout << ": floating pointers :" << endl;
    cout << "&f   = " << &f << endl;
    cout << "f_ptr  = " << f_ptr << endl;
    cout << "*f_ptr = " << *f_ptr << endl;
    cout << "size = " << sizeof(f_ptr) << endl;

    cout << "\n\n";


    char c = 'A';
    char *c_ptr = &c;

    cout << ": char pointers :" << endl;
    cout << "&c   = " << (int*)&c << endl;
    cout << "c_ptr  = " << (int*)c_ptr << endl;
    cout << "*c_ptr = " << *c_ptr << endl;
    cout << "size = " << sizeof(c_ptr) << endl;

    return 0;
}