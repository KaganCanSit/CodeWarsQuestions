/*
1, 246, 2, 123, 3, 82, 6, 41 are the divisors of number 246. Squaring these divisors we get: 1, 60516, 4, 15129, 9, 6724, 36, 1681. The sum of these squares is 84100 which is 290 * 290.

Task
Find all integers between m and n (m and n integers with 1 <= m <= n) such that the sum of their squared divisors is itself a square.
We will return an array of subarrays or of tuples (in C an array of Pair) or a string. The subarrays (or tuples or Pairs) will have two elements: first the number the squared divisors
of which is a square and then the sum of the squared divisors.

Example:
list_squared(1, 250) --> [[1, 1], [42, 2500], [246, 84100]]
list_squared(42, 250) --> [[42, 2500], [246, 84100]]
The form of the examples may change according to the language, see "Sample Tests".

Note
In Fortran - as in any other language - the returned string is not permitted to contain any redundant trailing whitespace: you can use dynamically allocated character strings.
*/

#include <iostream>
#include <math.h>
using namespace std;

typedef struct Pair Pair;
struct Pair {
	long long first;
	long long snd;
};

Pair** listSquared(long long m, long long n, int* length);

int main()
{
	int lgnt = 2;
	cout << listSquared(42, 250, &lgnt);
}

Pair** listSquared(long long m, long long n, int* length)
{
	Pair** newstr = (Pair**)calloc(0, sizeof(Pair*));

	long long total = 0;
	float flvalue = 0;
	int invalue = 0, c = 0;


	for (long long i = m; i < n; i++)
	{
		for (long long a = 1; a <= i; a++)
			if (i % a == 0)
				total += pow(a, 2);

		flvalue = sqrt(total);
		invalue = sqrt(total);
		if (flvalue == sqrt(total))
		{
			newstr = (Pair**)realloc(newstr, (c + 1) * sizeof(Pair*));
			Pair* ptr = (Pair*)calloc(1, sizeof(Pair));
			ptr->first = i;
			ptr->snd = total;
			newstr[c++] = ptr;
		}
		*length = c;
		total = 0;
	}
	return newstr;
}