/*
The drawing shows 6 squares the sides of which have a length of 1, 1, 2, 3, 5, 8. It's easy to see that the sum of the perimeters of these 
squares is : 4 * (1 + 1 + 2 + 3 + 5 + 8) = 4 * 20 = 80
Could you give the sum of the perimeters of all the squares in a rectangle when there are n + 1 squares disposed in the same manner as in the drawing:

Hint:
	See Fibonacci sequence
Ref:
	http://oeis.org/A000045

The function perimeter has for parameter n where n + 1 is the number of squares (they are numbered from 0 to n) and returns the total perimeter of all the squares.
perimeter(5)  should return 80
perimeter(7)  should return 216
*/

#include <iostream>
#include <math.h>
using namespace std;

typedef unsigned long long ull;
ull perimeter(int n);

int main()
{
	cout<<perimeter(7);
}

ull perimeter(int n)
{
	ull total = 0, a = 1, b = 1, c = 0;
	for (int i = 0; i <= n; i++)
	{
		total += a;
		c = a + b;
		a = b;
		b = c;
	}
	return total * 4;
	//return ((pow((1 + sqrt(5) / 2), n) - pow((1 - sqrt(5) / 2), n)) / sqrt(5)) * 4;
}

