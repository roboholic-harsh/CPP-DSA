#include <iostream>
using namespace std;

int main()
{
    char ch1 = 'A'; // char data type
    char str[5] = {'a', 'b', 'c', 'd', '\0'}; // char array
    int arr[5] = {1,2,3,4,5};
    str = "code"; //string litrals - no need to add NULL charactor
    cout << (int)ch1 << endl;
    cout << str[0] << endl;
    cout << str[1] << endl;
    cout << str[2] << endl;
    cout << str[3] << endl;
    cout << str[4] << endl;


    cout << "for int : " << arr << endl;
    cout << "for char: " << str << endl;
}