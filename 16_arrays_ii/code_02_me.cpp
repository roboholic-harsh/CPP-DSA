// trapping rain water

#include <iostream>
using namespace std;


int max_trapped_water(int arr[], int size)
{
    // int max_water = 0;
    int min_of_two_bar = 0;
    int trapped_water = 0;
    int max_trapped_water = 0;
    for (int start = 0; start < size; start++)
    {
        for (int end = start; end < size; end++)
        {
            min_of_two_bar = min(arr[start], arr[end]);
            trapped_water = 0;

            if( end - start < 2)
            {
                goto here;
                //    break;
            }

            for(int i = start + 1; i < end; i++)
            {
                if( arr[i] > min_of_two_bar)
                {
                    goto here;
                    //    break;
                }

                // finally vally fount
                trapped_water = trapped_water + (min_of_two_bar - arr[i]);

            }
            // trapped_water = (end - start - 1) * min_of_two_bar;
            // for(int i = start + 1; i < end; i++)
            // {
            //     trapped_water = trapped_water + (min_of_two_bar - arr[i]);
            // }
            
                cout << "trapped wter between " << start << " and " << end << " is " << trapped_water << endl;

            if(trapped_water > max_trapped_water)
            {
                max_trapped_water = trapped_water;
            }
            here:
        }
    }
    cout << "maximum tapped water is : " << max_trapped_water << endl;
    return max_trapped_water;
}

void total_trapped_water(int arr[], int size)
{
    int left_max[size];
    int right_max[size];
    left_max[0] = INT_MIN;
    right_max[size - 1] = INT_MIN;
    int trapped_water = 0;

    for(int i = 1; i < size - 1; i++)
    {
        left_max[i] = max(left_max[i - 1], arr[i - 1]);
        right_max[size - i - 1] = max(right_max[size - i], arr[size - i]);
    }

    for(int i = 1; i < size - 1; i++)
    {
        cout << left_max[i] << "  " << right_max[i] << " = " << min(right_max[i], left_max[i]) - arr[i] << endl;
        if(min(right_max[i], left_max[i]) - arr[i] < 0)
        {
            continue;
        }
        trapped_water += min(right_max[i], left_max[i]) - arr[i];
    }

    cout << "total trapped water : " << trapped_water;
}

int main()
{
    int arr[] = {4,2,0,6,3,2,5};
    int size = sizeof(arr)/ sizeof(int);
    cout << size << endl;
    // max_trapped_water(arr, size);
    total_trapped_water(arr, size);
    return 0;

}