// SQUARE PATTERN MY CODE
#include <iostream>
using namespace std;

int main()
{
    int n  = 3;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n + 1; j++)
        {
            if(i == 0 || i == n - 1 || j == 0 || j == n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}