/*
    Complete the function that accepts a string parameter, and reverses each word in the string. All spaces in the string should be retained.

    Examples
    "This is an example!" ==> "sihT si na !elpmaxe"
    "double  spaces"      ==> "elbuod  secaps"
*/

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

string reverse_words(string str)
{
    stack<char> st;
    queue<char> text;
    char a = ' ';

    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] != ' ')
            st.push(str[i]);
        else
        {
            while (st.empty() == false)
            {
                text.push(st.top());
                st.pop();
            }
            text.push(a);
        }
    }

    while (st.empty() == false)
    {
        text.push(st.top());
        st.pop();
    }

    for (int a = 0; a < str.length(); a++)
    {
        str[a] = text.front();
        text.pop();
    }
    return str;
}

int main()
{
    string str = "Hello World";
    cout<<reverse_words(str);
    return 0;
}
