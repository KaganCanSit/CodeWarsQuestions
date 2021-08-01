/*
Welcome.
In this kata you are required to, given a string, replace every letter with its position in the alphabet.
If anything in the text isn't a letter, ignore it and don't return it.
"a" = 1, "b" = 2, etc.

Example
alphabet_position("The sunset sets at twelve o' clock.");
Should return "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11" (as a string)
*/

#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

char* alphabet_position(const char* text);

int main()
{
	cout<<alphabet_position("The sunset sets at twelve o' clock.");
}

char* alphabet_position(const char* text) {

	int lenght = strlen(text);
	char* newstr;
	newstr = (char*)malloc(lenght);

	char value[2];
	for (int a = 0; text[0] != '\0'; a++)
	{
		if (text[a] >= 96 && text[a] <= 122)
		{
			cout<< sprintf(value, "%d", (tolower(text[a]) - 95));
			strcat(newstr, value);
		}
		else
			a++;
	}
	return newstr;
}