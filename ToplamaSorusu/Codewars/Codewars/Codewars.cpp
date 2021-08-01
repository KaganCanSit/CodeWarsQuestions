#include <iostream>
using namespace std;

int SayilariTopla(int a, int b);

int main(void) {

	int a = -1, b = 3;
	SayilariTopla(a, b);
}

int SayilariTopla(int a, int b)
{
	//int total = 0;
	//if (a > b)
	//{
	//	int temp;
	//	temp = b;
	//	b = a;
	//	a = temp;
	//}

	//while (a != b + 1)
	//{
	//	total += a;
	//	a++;
	//}
	//return total;
	return ((a + b) * 0.5) * (abs(a - b) + 1);
}
