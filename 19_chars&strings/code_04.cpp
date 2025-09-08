//# intro to cstring
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char str_1[100];
    char str_2[100] = "abc";
    char str_3[100] = "abc";

    strcpy(str_1, str_2);
    cout << str_1 << endl;

    cout << strcat(str_2, str_3) << endl;
    cout << str_2 << endl; // strcat store result in first argument

    // cout << str_1 << " = = " << str_3 << endl;
    cout << strcmp("mango", "tango") << endl;
    cout << strcmp("mango", "bango") << endl;
    cout << strcmp("mango", "mango") << endl;
    
    return 0;

}