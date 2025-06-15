#include <iostream>
using namespace std;

int main()
{
    int n;
    do
    {
        cout << "enter n : ";
        cin >> n;
        if(n % 10 == 0)
        {
            continue;
        }
        cout << "entered num is : " << n << endl;
    } while (true);
    
    return 0;
}