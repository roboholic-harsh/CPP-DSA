// find maximum profit while selling and buyinf of stocks

#include <iostream>
using namespace std;

// O(2n) = O(n)
void max_profit(int prices[], int n)
{
    int best_buy[n];
    best_buy[0] = INT_MAX;

    // cout << best_buy[0];
    //  O(N)
    for(int i = i; i < n; i++)
    {
        best_buy[i] = min(best_buy[i - 1], prices[i]);
        // cout << best_buy[i] << ", " ;
    }
    cout << endl;

    int max_profit = 0;

    // O(n)
    for(int i = 0; i < n; i++)
    {
        int current_profit = prices[i] - best_buy[i];
        max_profit = max(max_profit, current_profit)
    }

    cout << "max_profit =" << max_profit << endl;

}

int main()
{
    int arr[] = {7,1,};
    int size = sizeof(arr) / sizeof(int);


    return 0; 
}