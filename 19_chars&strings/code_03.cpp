#include <iostream>
#include <cstring>
using namespace std;

void to_upper(char *str)
{
    int i = 0;
    while(str[i] != 0)
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32; 
        }
        i++;
    }
    // cout << str << endl;
}

void reverse(char *word, int n)
{
    int start = 0, end = n-1;
    while(start < end)
    {
        word[start] = word[start] + word[end];
        word[end] = word[start] - word[end];
        word[start] = word[start] - word[end];
        start++;
        end--;
    }
}

bool is_palindrome(char word[], int n)
{
    int start = 0, end = n -1;
    while(++start < --end)
    {
        if(word[start] != word[end])
        {
            cout << "it is not a valid palindrome." << endl;
            return false;
        }
    }
    cout << "it is a valid palindrome." << endl;
    return true;
}

int main()
{
    char str[] = "codedoc";

    // to_upper(str);
    // reverse(str, strlen(str));
    cout << is_palindrome(str, strlen(str)) << endl;

    // cout << str << endl;

    return 0;
}