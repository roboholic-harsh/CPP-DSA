// by me
#include <iostream>
using namespace std;

void print_subarrays(int arr[], int size)
{
    int start = 0;
    int end = size;
    for(int i = 0; i < size; i++)
    {
        for(int j = i; j < size; j++)
        {
            start = i;
            end= j;

            for(int k = i; k <= j; k++)
            {
                cout << arr[k] << ", " ;
            }                 
            cout << endl;
        }
    }
}

// find maxmum (sub array elements)
// - by me
// time complexicity : O(n ^ 3)
int max_subarray_sum(int arr[], int size)
{
    int sum = 0;
    int max_sum = INT_MIN; // i forgotten here put 0 instaead of INT_MIN - buggy

    for(int i = 0; i < size; i++)
    {
        for(int j = i; j < size; j++)
        {
            sum = 0;

            for(int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
            }                 
            if(max_sum < sum)
            {
                max_sum = sum;
            }
        }
    }
    return max_sum;
}

// made by me but working correctly without any thinking
int kadane_s_algorithm(int arr[], int size)
{
    int sum = 0;
    int max_sum = INT_MIN;

    for(int i = 0; i < size; i++)
    {
        // sum = sum + arr[i];
        sum < 0 ? sum = arr[i]: sum = sum + arr[i];
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}

int main()
{
    // int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int arr[] = {2, -3, 6, -5, 4, 2};
    int arr[] = {-1,-2,-3,-4,-5};

    int size = sizeof(arr) / sizeof(int);

    // print_subarrays(arr, size);
    // cout << max_subarray_sum(arr, size) << endl;
    cout << kadane_s_algorithm(arr, size) << endl;

    return 0;
}