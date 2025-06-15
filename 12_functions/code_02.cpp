#include <iostream>
using namespace std;

void hello()
{
    cout << "hello world!\n";
}

void assistant()
{
    hello();
    cout << "work done\n";
}
int main()
{
    assistant();

    return 0;
}