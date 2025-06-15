#include <iostream>
using namespace std;

// void print(int arr[]) // ---------> this is wrong
// {
//     int size= sizeof(arr) / sizeof(int); // it will return 2
//     /*
//         sizeof(arr) - it is basically a int pointer it will return 8
//         sizeof(int) - 4
//         size = 8 / 4 = 2
//         ?? - this is why we have to use extra variable for array
//     */
//     for(int i = 0; i < size;i++)
//     {
//         cout << arr[i] << ", ";
//     }
//     cout << endl;
// }

void print_arr(int arr[], int size)
{
    for(int i = 0; i < size;i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main()
{
    int nums[8] = {1,2,3,4,5,6,7,8};
    int n = sizeof(nums) / sizeof(int);
    // print(nums);
    print_arr(nums,n);

    return 0;
}