#include <iostream>
using namespace std;

int from_roman(char* roman);
void to_roman(int number, char* destination);

int main()
{
	char m[5] = "XXIV";
	cout << from_roman(m);
	to_roman(21, 0);
}

int from_roman(char* roman)
{
	int totalvalue = 0;
	for (int a = 0; roman[a] != '\0'; a++)
	{
		switch (roman[a])
		{
		case 'I':
			totalvalue += 1;
			break;
		case 'V':
			totalvalue += 5;
			break;
		case 'X':
			totalvalue += 10;
			break;
		case 'L':
			totalvalue += 50;
			break;
		case 'C':
			totalvalue += 100;
			break;
		case 'D':
			totalvalue += 500;
			break;
		case 'M':
			totalvalue += 1000;
			break;
		default:
			break;
		}
	}
	return totalvalue;
}

void to_roman(int number, char* destination)
{

}