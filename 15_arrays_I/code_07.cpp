#include <iostream>
using namespace std;

void func1(int arr[])
{
    arr[1] = 500;
}
void func2(int *arr)
{
    arr[1] = 40;
}


int main()
{
    int arr[5] = {5,4,3,2,1};
    
    cout << arr << endl;
    cout << *arr << endl;

    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;
    cout << *(arr+3) << endl;
    cout << *(arr+4) << endl;

    cout << "\n\nlet see calll by reference\n";
    cout << arr[1] << endl;
    func1(arr);
    cout << arr[1] << endl;
    func2(arr);
    cout << arr[1] << endl;
}