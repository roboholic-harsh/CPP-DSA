#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int difference(int a, int b)
{
    return a - b;
}
int main()
{
    int s = sum(2,3);
    cout << "sum = "<< s << endl;
    int d = difference(4,2);
    cout << "difference = " << d << endl;
    return 0;
}