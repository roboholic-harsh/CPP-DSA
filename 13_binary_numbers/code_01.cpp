// binary to decimal
#include <iostream>
using namespace std;

int main()
{
    int binary = 100101;
    int decimal = 0;
    int n = 1;
    while(binary > 0)
    {
        int last_digit = binary % 10;
        binary /= 10;
        decimal += n * last_digit;
        n = n * 2;
    }

    cout << decimal << endl;
    return 0;
}