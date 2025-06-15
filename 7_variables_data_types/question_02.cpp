#include <iostream>
using namespace std;

int main()
{
    float pencil, eraser, pen;
    
    cout << "enter price of pen :";
    cin >> pen;

    cout << "enter price of pencil :";
    cin >> pencil;
    
    cout << "enter price of eraser :";
    cin >> eraser;
    
    float total = pencil + eraser + pen;
    
    cout << "total bill about is  :" << total << endl;
    return 0;
}