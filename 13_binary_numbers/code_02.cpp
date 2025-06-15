// binary to decimal
#include <iostream>
using namespace std;

void bin_to_dec(int binary)
{
    int n = binary;
    int decimal = 0;
    int power = 1;
    
    while(n > 0)
    {
        decimal += power * (n % 10);
        n /= 10;
        power *= 2;
        // int last_digit = n % 10;
        // decimal += power * (n % 10);
        // n = n /10;
        // power = 2 * power;
    }
    
    cout << binary << " is " << decimal << endl;
}

int main()
{
    bin_to_dec(10101);
    bin_to_dec(100000);
    bin_to_dec(111111);
    return 0;
}