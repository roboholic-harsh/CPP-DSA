// trapping brain water

#include <iostream>
using namespace std;

void trapped_water(void heights, int n)
{
    int left_max[n];
    // left_max[0] = INT_MIN;
    left_max[0] = heights[0];
    
    int right_max[n];
    // right_max[size-i] = INT_MIN;
    right_max[size-1] = heights[size - 1];
    

    for(int i = 1; i < n; i++)
    {
        leftMax[i] = max[left_max[ i - 1], heights[i - 1]]
    }

    for(int i = n -2; i >= 0; i--)
    {
        right_max[i] = max(right_max[i+1], heights[i + 1]);
    }
    
    int trepped_water = 0;

    for(int i = 0; i < n; i++)
    {
        int current_water = min(left_max[i], right_max[i]) - heights[i];
        if(current_water > 0)
        {
            trapped_water += current_water; 
        }
    }
}

int main()
{
    int heights = { 4, 2, 0, 6, 2, 5};
    int n = sizeof(heights) / sizeof(int);

    trapped_water(heights, n);

}