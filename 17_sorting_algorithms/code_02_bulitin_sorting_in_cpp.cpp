#include <iostream>
#include <algorithm>
using namespace std;

void print_arr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main()
{
    // int arr[] = { 5, 4, 1, 3, 2 };
    int arr[] = {5, 4, 1, 3, 5, 2, 4, 6, 1};
    // int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    // int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int size = sizeof(arr) / sizeof(int);


    cout << "unsorted : ";
    print_arr(arr, size);

    // builtin sorting functions in C++


    // ascending
    sort(arr,    arr+8);  // in algorithm library
    //   ^           ^
    //   start       end
    //   iterator    iterator       this for descending 
    //   ^           ^              ^ 
    sort(arr,    arr+8, greater <int>());  // in algorithm library
    // descending
    cout << "  sorted : ";
    print_arr(arr, size);

    return 0; 
}