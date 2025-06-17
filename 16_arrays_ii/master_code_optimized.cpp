// by shradhha mam
#include <iostream>
using namespace std;

// time complexicity : O(x ^ 3)
void print_subarrays(int arr[], int size)
{
    for(int start = 0; start < size; start++)
    {
        for(int end = start; end < size; end++)
        {
            // cout << "( " << start << " , " << end << " )" << endl;
            for(int k = start; k <= end; k++)
            {
                cout << arr[k] << ", " ;
            }                 
            cout << endl;
        }
    }
}


// brute force approch
// time complexicity : O(x ^ 3)
int max_subarray_sum(int arr[], int size)
{
    int max_sum = INT_MIN;

    for(int start = 0; start < size; start++)
    {
        for(int end = start; end < size; end++)
        {
            int sum = 0;

            for(int i = start; i <= end; i++)
            {
                sum = sum + arr[i];
            }                 
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

//  max(a, max(b, c));  - to find sum of three numbers
// MACROS
// INT_MAX = +infinity
// INT_MIN = -infinity


// optimized brute force approch
// time complexicity : O(x ^ 2)
int max_subarray_sum_2(int arr[], int size)
{
    int sum = 0;
    int max_sum = INT_MIN;

    for(int start = 0; start < size; start++)
    {
        sum = 0;
        for(int end = start; end <= size; end++)
        {
            sum = sum + arr[end];
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

int kadane_s_algorithm(int arr[], int size)
{
    int sum = 0;
    int max_sum = INT_MIN;

    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        max_sum = max(max_sum, sum);
        if(sum < 0)
        {
            sum = 0;
        }

    }
    return max_sum;
}

int main()
{
    int arr[] = {-1,-2,-3,-4,-5};
    // int arr[] = {2, -3, 6, -5, 4, 2};

    int size = sizeof(arr) / sizeof(int);

    // print_subarrays(arr, size);
    cout << kadane_s_algorithm(arr, size) << endl;

    return 0;
}