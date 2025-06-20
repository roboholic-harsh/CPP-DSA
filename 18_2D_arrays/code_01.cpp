// making, pringting 2d array, 
#include <iostream>
using namespace std;

int main()
{

    int students[3][3] = {//            index
        {100, 100, 100}, // student 1   0
        { 85,  74,  89}, // student 2   1
        { 63,  72,  65}  // student 3   2
    };// sci  mat  eng
// indec   0    1    2
    // cout << students[][]
    cout << "student_2's english marks : "<< students[1][2] << endl;
    // row/ column 1  2  3
    //     0       o  o  o
    //     1       o  o  X  <--- 1st row, 2nd column    arr[1][2]
    //     2       o  o  o
}