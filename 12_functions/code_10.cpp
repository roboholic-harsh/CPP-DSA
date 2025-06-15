#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "sum of two ints is " << a + b << endl;
    return a + b;
}

float sum(float a, float b)
{
    cout << "sum of two floats is " << a + b << endl;
    return a + b;
}

double sum(double a, double b)
{
    cout << "sum of two doubles is " << a + b << endl;
    return a + b;
}
int main()
{
    sum(2,3);
    sum(2.0,3.0);
    sum((float)2.0,(float)3.0);
    return 0;
}