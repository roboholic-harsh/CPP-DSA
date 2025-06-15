#include <iostream>
using namespace std;

int main()
{
    int age = 19;
    int num = -200;
    char grade = 'A';
    bool is_adult = true;
    float pi = 3.14;
    double e = 2.7134;
    cout << age << " " << num << " " << grade << " " << is_adult << " " << pi << " " << e << endl;
    cout << "size of int  = " << sizeof(int) << endl;
    cout << "size of char = " << sizeof(char) << endl;
    cout << "size of bool = " << sizeof(bool) << endl;
    return 0;
}