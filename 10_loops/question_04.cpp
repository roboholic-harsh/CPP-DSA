#include <iostream>
using namespace std;

int main()
{
    int n = 50, is_prime = 1;
    int i , j;

    for (j = 0; j < n; j++)
    {
        for(i = 2;  i * i <=  j; i++) // it is improvement
        {
            if(j % i == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if(is_prime) 
        {
            cout << j << " ,";
        }
        
            is_prime = 1;
    }

    return 0;
}