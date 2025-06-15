// bionomial cooefficieint -- helps to find no of choices
#include <iostream>
using namespace std;

int  factorial(int n)
{
    int fact = 1; // this is compulsary
    for(int i = 1; i <=n; i++)
    {
        fact *= i;
    }
    return fact;
}

int bio_coff(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int bio_coff_2(int n, int r)
{
    int ans = 1;
    for(int i = r + 1; i <= n; i++)
    {
        ans = ans * i;
    }
    for(int i = 1; i <= n - r; i++)
    {
        ans = ans / i;
    }
    return ans;
}
int main()
{
    cout << "<1> 12 C6 = " << bio_coff(12,6) << endl;
    cout << "<2> 12 C6 = " << bio_coff_2(12,6) << endl;

    return 0;
}