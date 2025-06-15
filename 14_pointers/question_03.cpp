#include <iostream>
using namespace std;
// in ascii table see thereis difference in hex, ans dec;
int main()
{
    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char &cho = ch;
    
    cho += a;
    *ptr += ch;
    
    cout << a << "," << ch << endl;

}