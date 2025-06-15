#include <iostream>
using namespace std;

bool is_even(int a)
{
    if(a % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    cout << is_even(2) << endl;

    cout << is_even(5) << endl;

    cout << is_even(28) << endl;
    
    return 0;
}