#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,5,6,2,6};
    int n = sizeof(arr)/ sizeof(int);
    int max = arr[0];
    int min = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(max < arr[i])
            max = arr[i];
        if(min > arr[i])
            min = arr[i];
    }
    cout << "min is : " << min << endl;
    cout << "max is : " << max << endl;

}