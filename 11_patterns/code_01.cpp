#include <iostream>
using namespace std;

int main()
{
    int n = 5 ;// you can change this value

    // outer loops no of rowss
    for(int i = 0 ; i < n; i++)
    {
        // innner loop no fo columns
        for(int j = 0; j < n; j++)
        {
            cout << i + 1 << " ";

        }

        cout << endl;
    }

    return 0;
}