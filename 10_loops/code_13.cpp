#include <iostream>
using namespace std;

int main()
{   
    int i;
    do 
    {
        cout << "enter number : " ;
        cin >> i;
        if(i % 10 == 0)
            break;
    } while(true);
    return 0;
}