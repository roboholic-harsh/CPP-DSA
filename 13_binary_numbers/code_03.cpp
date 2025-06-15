#include <iostream>
using namespace std;

void dec_to_bin(int decimal)
{
    int binary = 0;
    int n = decimal;
    int power = 1;
    while(n  > 0)
    {
        int last_digit = n % 2;
        binary = binary + power * last_digit; 
        n /= 2;
        power *= 10;
    }
    cout << decimal << " is " << binary << endl;
}

int main()
{
    dec_to_bin(32);
    dec_to_bin(63);
    dec_to_bin(21);
    return 0;
}