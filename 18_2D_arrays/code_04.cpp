#include <iostream>
using namespace std;

void print_spiral(int arr[][4], int n, int  m)
{
    // int top = 0, right = 0, bottom = 0, left = 0;
    int scol = 0, srow = 0;
    int ecol = m - 1, erow = n -1;

    while(srow <= erow && scol <= ecol)
    {    // top line
        for(int i = scol; i <= ecol; i++)
        {
            cout << arr[srow][i] << " ";
        }

                
        // right
        for(int i = srow+1; i<= erow; i++)
        {
            cout << arr[i][ecol] << " ";
        }


        // bottom
        for(int i = ecol - 1; i >= scol; i--)
        {
            if(srow == erow)
            {
                break;
            }
            cout << arr[erow][i] << " ";
        }

        // left
        for(int i = erow - 1; i > srow; i--)
        {
            if(scol == ecol)
            {
                break;
            }
            cout << arr[i][scol] << " ";
        }

        srow++; scol++; erow--; ecol--;
        
    }
    cout << endl;   
}

// time complexivity O(n^2)
void diagonal_sum(int arr[][3], int n)// givwen m = n
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i==j)
            {
                sum += arr[i][j];
            }
            else if(i == n-i-1)
            {
                sum += arr[i][j];
            }
        }
    }

    cout  << " sum : "<< sum << endl;
}

void search(int arr[][4], int n, int m, int key)
{
    int i = 0, j = m - 1;
    while(i < n && j >= 0)
    {
        // cout << arr[i][j] << endl;
        if(arr[i][j] > key)
        {
            j--;
        }
        else if(arr[i][j] < key)
        {
            i++;
        }
        else
        {
            cout << " fount at cell {" << i << " , "<< j << "}\n";
            return;
        }
    }
    cout << "key not fount";
}

int main()
{
    // int arr[4][4] = {
    //     {  1,  2,  3,  4},
    //     {  5,  6,  7,  8},
    //     {  9, 10, 11, 12},
    //     { 13, 14, 15, 16}
    // };

    //  int arr[5][4] = {
    //     {  1,  2,  3,  4},
    //     {  5,  6,  7,  8},
    //     {  9, 10, 11, 12},
    //     { 13, 14, 15, 16}
    //     { 17, 18, 19, 20}
    // };
        int arr[3][3] = {
        {  1,  2,  3},
        {  4,  5,  6},
        {  7,  8,  9}
    };
    // print_spiral(arr, 4, 4);
    // diagonal_sum(arr, 3, 3);

        int arr2[4][4] = {
        { 10, 20, 30, 40},
        { 15, 25, 35, 45},
        { 27, 29, 37, 48},
        { 32, 33, 39, 50}
    }; 
        search(arr2,4,4, 32);

    return 0;
}