#include <iostream>
using namespace std;

void print_arr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}



void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // int key = arr[i];
        for(int j = 0; j < n; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }

    }
}

void selection_sort(int arr[], int n)
{
    int minimum = 0;
    for(int i = 0; i < n - 1; i++)
    {
        minimum = i;
        for(int j = i; j < n; j++)
        {
            if(arr[minimum] > arr[j])
            {
                minimum = j;
            }
        }
        swap(arr[i], arr[minimum]);
        // print_arr(arr, n);
    }
}

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void insertion_sort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int temp = arr[i];
        for(int j = i; j > 0; j--)
        {
            if(arr[j - 1] > temp)
            {
                swap(arr[j-1], arr[j]);
                // arr[j] = arr[j - 1]; 
                // arr[j - 1] = temp;
            }
        }
        print_arr(arr, n);
    }
}

// frequency array   index : number    value : frequency of number
void counting_sort(int arr[], int n)
{
    int frequency[n] = {0 };

    for(int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }

    print_arr(frequency, n);

    int count = 0;
    for(int i = 0; i < n;  i++)
    {
        while(frequency[i] > 0 )
        {
            arr[count] = i;
            frequency[i]--;
            count ++;
        }
    }
}


int main()
{
    int arr[] = {5, 4, 1, 3, 5, 2, 4, 6, 1};
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    int size = sizeof(arr)/ sizeof(int);

    cout << "unsorted : ";
    print_arr(arr, size);

    // swap(arr[0], arr[1]);


    // bubble_sort(arr, size);
    // selection_sort(arr, size);
    // insertion_sort(arr, size);
    counting_sort(arr, size);
    cout << "  sorted : ";
    print_arr(arr, size);

    
    return 0;
} 