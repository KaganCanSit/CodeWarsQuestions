#include <iostream>
using namespace std;

bool isPrime(int num);

int main()
{
     cout <<  isPrime(2);
}

bool isPrime(int num)
{
    if (num < 2)
        return false;

    for (int i = 3; i < sqrt(num) + 1; i++)
        if (num % i == 0)
            return false;

    return true;
}
