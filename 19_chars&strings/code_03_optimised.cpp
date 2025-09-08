#include <iostream>
#include <cstring>
using namespace std;

void to_upper(char *word, int n)
{
    for(int i = 0; i < n; i++)
    {
        char ch = word[i];
        if(ch <= 'z' && ch >= 'a')
        {
            word[i] = ch - 'a' + 'A';
        }

    }
    cout << word << endl;
}

void reverse(char *word, int n)
{
    int start = 0, end = n-1;
    while(++start < --end)
    {
        word[start] = word[start] + word[end];
        word[end] = word[start] - word[end];
        word[start] = word[start] - word[end];
        // start++;
        // end--;
    }
}

bool is_palindrome(char word[], int n)
{
    int start = 0, end = n -1;
    while(++start < --end)
    {
        if(word[start] != word[end])
        {
            // cout << "it is not a valid palindrome." << endl;
            return false;
        }
    }
    // cout << "it is a valid palindrome." << endl;
    return true;
}

int main()
{
    char str[] = "codedoc";
    // cout << n;
    // to_upper(str,strlen(str));
    cout << is_palindrome(str, strlen(str)) << endl;



    cout << str << endl; // you can print here also because it is passed by reference
    // cout << to_upper(str, n) << endl;



}