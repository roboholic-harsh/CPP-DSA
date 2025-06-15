#include <iostream>
#define PI 3.14 //symbolic constant
using namespace std;
int main() {
    const int n1 = 10;
    int n2 = 10;
    // n1 = 20;   // it will generate an error
    n2 = 20;
    return 0;
}