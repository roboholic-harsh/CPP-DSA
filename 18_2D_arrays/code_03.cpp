// me

#include <iostream>
using namespace std;

void print_spiral(int arr[][4], int n, int  m)
{
    // int top = 0, right = 0, bottom = 0, left = 0;
    int scol = 0, srow = 0;
    int ecol = m - 1, erow = n -1;

    while(true)
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

        if(erow-srow < 1 || ecol-scol < 1 )
        {
            break;
        }        

        // bottom

        for(int i = ecol - 1; i >= scol; i--)
        {
            cout << arr[erow][i] << " ";
        }

        // left
        for(int i = erow - 1; i > srow; i--)
        {
            cout << arr[i][scol] << " ";
        }

        srow++; scol++; erow--; ecol--;
        
    }   
}

void make_spiral(int n, int  m)
{
    int arr[n][m];

    // int top = 0, right = 0, bottom = 0, left = 0;
    int scol = 0, srow = 0;
    int ecol = m - 1, erow = n -1;
    int count = 1;

    // while(srow <= erow || scol <= ecol)
    while(true)
    {    // top line
        for(int i = scol; i <= ecol; i++)
        {
            arr[srow][i] = count++;
            cout << arr[srow][i] << " ";
        }

                
        // right
        for(int i = srow+1; i<= erow; i++)
        {
            arr[i][ecol] = count++;
            cout << arr[i][ecol] << " ";
        }

        if(erow-srow < 1 || ecol-scol < 1 )
        {
            break;
        }        

        // bottom
        for(int i = ecol - 1; i >= scol; i--)
        {
            arr[erow][i] = count++;
            cout << arr[erow][i] << " ";
        }

        // left
        for(int i = erow - 1; i > srow; i--)
        {
            arr[i][scol] = count++;
            cout << arr[i][scol] << " ";
        }

        srow++; scol++; erow--; ecol--;
    }   

    cout << "output of array : \n";
    for(int i = 0; i < n; i++) // raws
    {
        for(int j = 0; j < m; j++) // columns
        {
            cout << arr[i][j] << " ";     
        }
        cout << endl;
    }

}

// time complexicity : O(n)
void diagonal_sum(int arr[][3], int n)// givwen m = n
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i][i];
        if(i== (n - i - 1) )
        {
            continue;
        }
        sum = sum + arr[i][n - 1 - i];
    }
    cout  << " sum : "<< sum << endl;
}

// time complexicity : O(n+m)
// stair case approch

void search(int arr[][4], int n, int m, int key)
{
    for(int i = 0, j = m - 1; i < n && j >= 0 ; )
    {
        // cout << arr[i][j] << endl;

        if(key > arr[i][j])
        {
            i++;
        }
        else if(key < arr[i][j])
        {
            j--;
        }
        else if(key == arr[i][j])
        {
            cout << "\n element is at [ " << i << " , " << j << "]\n";
            return;
        }

    }
    cout << "element not fount";
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

    int arr2[4][4] = {
        { 10, 20, 30, 40},
        { 15, 25, 35, 45},
        { 27, 29, 37, 48},
        { 32, 33, 39, 50}
    }; 
    // print_spiral(arr, 5, 4);
    // make_spiral(9, 5);
    // diagonal_sum(arr, 3, 3);

    // searching in matrix

    search(arr2,4,4, 32);


    return 0;
}