// its my approach it can be wrong after that in optimized it was corrected
// find maximum profit while selling and buyinf of stocks

#include <iostream>
using namespace std;

int max_profit(int arr[], int size)
{
    int best_values[size];
    int min_value = INT_MAX;
    int buy = 0, sell = 0;
    int max_value = 0;

    // cout << endl;
    for(int i = 0; i < size; i++)
    {
        best_values[i] = min_value;
        // cout << best_values[i] << ", " ; 
        if(min_value > arr[i])
        {
            min_value = arr[i];
            buy = i;
        }
    }
    // cout << endl;

    for(int i = 0; i < size; i++)
    {
        // cout << best_values[i] << " ," ;

        best_values[i] = arr[i] - best_values[i];


        if(max_value < best_values[i] && best_values[i] > min_value)
        {
            sell = i;
            max_value = best_values[i];
        }

    }
    cout << "buy at : " << buy << endl << "sell at : " << sell << endl;
    cout << "max profit : " << arr[sell] - arr[buy] << endl;
    return 0;
}
int main()
{
    // int arr[] = {7,1,5,3,6,4};
    int arr[] = {7,6,5,4,3,2,1};

    int size  = sizeof(arr) / sizeof(int);

    max_profit(arr, size);
    return 0; 
}