/*
Trolls are attacking your comment section!
A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.
Your task is to write a function that takes a string and return a new string with all vowels removed.

For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

Note: for this kata y isn't considered a vowel.
*/

#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

char* disemvowel(const char* str);

int main()
{
	char metin[100] = "No offense but,\nYour writing is among the worst I've ever read";
	cout << disemvowel(metin);
}

char* disemvowel(const char* str)
{
    int lenght = strlen(str);

    char *newstr;
    newstr = (char*) malloc(lenght+1);
    strcpy(newstr,str);

    char vowels[5] = { 'a','e','i','o','u' };

    for (int i = 0; i < lenght; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (tolower(newstr[i]) == vowels[j])
            {
                for (int a = i; a < lenght; a++)
                    newstr[a] = newstr[a + 1];

                j = -1;
                lenght--;
            }
        }
    }
    return newstr;
}