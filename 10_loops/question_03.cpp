#include <iostream>
using namespace std;

int main()
{
    int n, N, cube_sum = 0, last_digit = 0;

    cout << "enter number : ";
    cin >> n;
    N = n;
    while(n > 0)
    {
        last_digit = n % 10;
        cube_sum = cube_sum + last_digit * last_digit * last_digit;
        n = n / 10;
    }

    if(cube_sum == N)
    {
        cout << "number is arm strong" << endl;
    }
    cout << cube_sum;
    return 0;
}