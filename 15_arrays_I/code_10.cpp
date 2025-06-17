#include <iostream>

using namespace std;

void printArr(int *ptr, int size)
{
    for(int i = 0; i < size; i++)
    {
        // cout << *(ptr + i) << endl; 
        // same

        cout  << *ptr << endl;
        ptr++;
    }

}

int main()
{
    int a[] = {1,2,3,4,5};
    int size = sizeof(a) / sizeof(int);
    int *ptr = &a[1];

    // increment & decrement
    cout << "ptr   = " << ptr << endl;
    ptr = &a[1];
    cout << "ptr++ = " << ptr++ << endl;
    ptr = &a[1];
    cout << "++ptr = " << ++ptr << endl;
    ptr = &a[1];
    cout << "ptr-- = " << ptr-- << endl;
    ptr = &a[1];
    cout << "--ptr = " << --ptr << endl;

    // addition & substraction of number
    ptr = &a[1];
    cout << "ptr+3 = " << ptr+3 << endl;

    // substraction of ptr
    printArr(a,size);
    int *ptr1 = &a[0];
    int *ptr2 = &a[4];
    cout << "ptr2 - ptr1  = " << ptr2 - ptr1 << endl;

    // comparison
    cout << "ptr2 > ptr1 = " << (ptr2 > ptr1) << endl;
    cout << "ptr2 < ptr1 = " << (ptr2 < ptr1) << endl;
    
    ptr2 = &a[0];
    cout << "ptr2 == ptr1 = " << (ptr2 == ptr1) << endl;
}