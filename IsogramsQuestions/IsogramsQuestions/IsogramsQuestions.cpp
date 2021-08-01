/*
An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. 
Assume the empty string is an isogram. Ignore letter case.

isIsogram "Dermatoglyphics" == true
isIsogram "aba" == false
isIsogram "moOse" == false -- ignore letter case
*/

#include <iostream>
using namespace std;

bool IsIsogram(char* str);

int main()
{
    char kelime[50]={"isIsogram"};
    int deger;
    deger=IsIsogram(kelime);
    cout << deger;
}

// && str[a]!=' '

//Benim Çözümüm
bool IsIsogram(char* str)
{
    for (int a = 0; a< str[a] != '\0'; a++)
    {
        int counter = 0;
        for (int j = 0; j< str[j] != '\0'; j++)
            if (tolower(str[a]) == tolower(str[j]))
                counter++;

        if (counter > 1)
            return false;
    }
    return true;
}