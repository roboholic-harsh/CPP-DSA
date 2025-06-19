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

// swap not needed it is builtin function
// time complexicity O(n ^ 2)
// sorting in ascending
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        cout << "\nouter loop ";

        bool is_swap = false;
        for(int j = 0; j < n - i - 1; j++)
        {
            // cout << j+1 << " ";
            if(arr[j] > arr[j + 1]) // < if need descending
            {
                swap(arr[j], arr[j + 1]);
                is_swap = true;
            }
        }

        if(!is_swap) // if no swaps means its sorted array so no many outer loop and inner only once
        {
            return;
        }

    }
}


// select smallest index and put it first
// time complexicity O(n ^ 2)
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
    }
}

// time complexicity O(N ^ 2)
void insertion_sort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int current = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > current)
        {
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
        arr[prev + 1] = current; // put temp value at where loop stops or we find smaller value
        print_arr(arr, n);
    }
}

// time complexicity O(n + range/ )
void counting_sort(int arr[], int n)
{
    int frequency[100000] = {0}; // initilize all with zero
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    
    for(int i = 0; i < n; i++)
    {
        min_val = min(min_val, arr[i]);
        max_val = max(max_val, arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }

    cout << "freq arr : ";
    print_arr(frequency, n);

    for(int i = min_val, count = 0; i <= max_val;  i++)
    {
        while(frequency[i] > 0 )
        {
            arr[count++] = i;
            frequency[i]--;
        }
    }
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


    // bubble_sort(arr, size);
    // selection_sort(arr, size);
    // insertion_sort(arr, size);
    counting_sort(arr, size);

    cout << "  sorted : ";
    print_arr(arr, size);

    return 0; 
}