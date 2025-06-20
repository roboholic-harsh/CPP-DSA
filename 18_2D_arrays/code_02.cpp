#include <iostream>
using namespace std;

int main()
{
    int arr[3][4];
    // 3 row, 4 column

    cout << "enter 12 numbers : " << endl;
    // inputs   
    int n = 3, m = 4;
    for(int i = 0; i < n; i++) // raws
    {
        for(int j = 0; j < m; j++) // columns
        {
            cin >> arr[i][j];     
        }
    }
    //if inputs : 1 2 3 4 5 6 7 8 9 10 11 12
    // they will be like in 2d
    // 1  2  3  4   ====>>    0,0   0,1   0,2   0,3
    // 5  6  7  8       >>>>  1,0   1,1   1,2   1,3
    // 9 10 11 12   ====>>    2,0   2,1   2,2   2,3


    // outputs

    cout << "output of array : ";
    for(int i = 0; i < n; i++) // raws
    {
        for(int j = 0; j < m; j++) // columns
        {
            cout << arr[i][j] << " ";     
        }
        cout << endl;
    }



}