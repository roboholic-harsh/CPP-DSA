#include <iostream>
using namespace std;

// search in rowwise and columnwise sorted matrix

void func_1(int mat[][4], int n, int m)
{
    cout << "0th row ptr " << mat << endl;
    cout << "1th row ptr " << mat + 1<< endl;
    cout << "2th row ptr " << mat + 2<< endl;
    cout << "3th row ptr " << mat + 3<< endl;

    cout << "0th row val " << *mat << endl; // gives row's first element address
    cout << "1th row val " << *(mat + 1)<< endl;
    cout << "2th row val " << *(mat + 2)<< endl;
    cout << "3th row val " << *(mat + 3)<< endl;

    cout << "value at 0,1 = " << *(*(mat + 0) +1); // gives value of i,j

    // cout << "value at i,j" << *(*(mat + i) +j)
}
// this both are same
void func_2(int (*ptr)[4], int n, int m)
{
    cout << "0th row ptr" << ptr << endl;
    cout << "1th row ptr" << ptr + 1<< endl;
    cout << "2th row ptr" << ptr + 2<< endl;
    cout << "3th row ptr" << ptr + 3<< endl;

    cout << "value at 0,1 = " << *(*(ptr + 0) +1); // gives value of i,j


}
int main()
{
    int mat[4][4] =
    {   { 1, 2, 3, 4},
        { 5, 6, 7, 8},
        { 9,10,11,12},
        {13,14,15,16}};
    cout << mat << endl;
    
    cout << mat + 1 << endl;



    // to varify
    cout << mat << "==" << &mat[0][0] << endl;
    cout << mat+1 << "==" << &mat[0][1] << endl;
    cout << mat+1 << "==" << &mat[1][0] << endl;

    cout << endl;

    func_1(mat, 4,4);
    cout << endl;

    func_2(mat, 4,4);
    cout << endl;

    return 0;
}