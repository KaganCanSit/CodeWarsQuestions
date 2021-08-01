#include <iostream>
#include <math.h>
using namespace std;

long long findNb(long long m);

/*
    Your task is to construct a building which will be a pile of n cubes. The cube at the bottom will have a volume of n^3, the cube above will have volume of (n-1)^3 and 
    so on until the top which will have a volume of 1^3.
    You are given the total volume m of the building. Being given m can you find the number n of cubes you will have to build?
    The parameter of the function findNb (find_nb, find-nb, findNb, ...) will be an integer m and you have to return the integer n such as n^3 + (n-1)^3 + ... + 1^3 = m if
    such a n exists or -1 if there is no such n.
    
    Examples:
    findNb(1071225) --> 45
    findNb(91716553919377) --> -1
*/

int main(void)
{
    int answer;
    answer = findNb(135440716410000);
    cout << answer;
    return 0;
}

//Benim Çözümüm
long long findNb(long long m)
{
    int counter = 1;
    for (; m > 0; counter++)
        m -= pow(counter, 3);

    return (m == 0) ? counter -= 1 : -1;
}

//En kısa Çözümler
/*
    long long findNb(long long m)
    {
        long long n = sqrt(m);
        return n * n == m? (sqrt(8 * n + 1) - 1) / 2 : -1;
    }

    long long findNb(long long m)
    {
        long long a = (long long) floor(sqrt(sqrt(4 * m)));
        if ((4 * m) == (a * a * (a + 1) * (a + 1))) return a; else return -1;
    }
*/