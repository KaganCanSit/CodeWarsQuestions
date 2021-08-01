/*
    Complete the function that accepts a string parameter, and reverses each word in the string. All spaces in the string should be retained.

    Examples
    "This is an example!" ==> "sihT si na !elpmaxe"
    "double  spaces"      ==> "elbuod  secaps"
*/

#include <iostream>
using namespace std;

string reverse_words(string str);

int main()
{
    cout << reverse_words("The quick brown fox jumps over the lazy dog.");
    
}

string reverse_words(string str)
{
    int n = str.length();
    
    int temp=0;
    for(int c=0;c<n;c++)
    {
        if (str[c] == ' ')
        {
            for (int i = temp; i < c - 1 / 2; i++)
                str[i] = str[c - i];
            temp = c;
        }
    }
    

    return str;
}