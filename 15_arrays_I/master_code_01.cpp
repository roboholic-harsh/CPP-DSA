// codes written by me

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

// without extra space
void reverse_arr_without_extra_space(int arr[], int size)
{
    if(size % 2 == 1)
    {
        size = size  - 1;
    }
    // size = size /2;
    for(int i = 0; i < size  / 2; i++)
    {
        arr[i] = arr[i] + arr[size - i - 1];
        arr[size - i - 1] = arr[i] - arr[size - i - 1];
        arr[i] = arr[i] - arr[size - i -1 ]; 
        // int a = arr[i];
        // arr[i] = arr[size - i - 1];
        // arr[size - i - 1] = a;
    }
}

void reverse_arr_with_extra_space(int arr[],int n)
{
    if(n % 2 == 1)
    {
        n = n - 1;
    }
    for(int i = 0;i < n / 2; i++)
    {
        int a = arr[i];
        arr[i] = arr[n- i - 1];
        arr[n - i - 1] = a;
    }
}

int binary_search(int arr[], int size, int key)
{
    int n_max = size;
    int n_min = 0;

    while(n_max != n_min)
    {
        
        if(key > arr[(n_max + n_min) / 2])
        {
            n_min = (n_max + n_min) / 2;
        } 
        else if(key < arr[(n_max + n_min) / 2])
        {     
            n_max = (n_max + n_min) / 2;
        }
        else
        {
            return (n_max + n_min) /2;
        }
    // cout << endl << "::::" << n_max << " : " << n_min << endl;
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
    int arr[] = {0,1,2,3,4,5,6,7,8,9,10};

    int n = sizeof(arr)/ sizeof(int);
    cout << "original array               : ";
    print_arr(arr,n);

    // reversed  array

    reverse_arr_with_extra_space(arr,n);
    cout << "reversed using extra space   : ";
    print_arr(arr,n);

    reverse_arr_without_extra_space(arr,n);
    cout << "reversed without extra space : ";
    print_arr(arr,n);


    // out put of linear search
    int find_no = 10;
    cout << find_no << " is at "<< binary_search(arr,n, find_no) << ". " << endl;
    return 0;
}

// git remote add origin https://github.com/roboholic-harsh/CPP-DSA.git
// git branch -M main


// git push -u origin main

