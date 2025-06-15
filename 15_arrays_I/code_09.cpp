#include<iostream>
using namespace std;

int linear_search(int *arr, int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if(key == arr[i])
        {
            return i;
        }
    }
    return -1;
}

void print_arr(int arr[], int size)
{   
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int n = sizeof(arr)/ sizeof(int);
    print_arr(arr,n);


    cout << linear_search(arr,n, 8) << endl;
    return 0;
}