#include <iostream>
#include <string.h>
using namespace std;

string rot13(string msg)
{
    for (int i = 0; msg[i] != '\0'; i++)
    {
        if ((msg[i] >= 97 && msg[i] < 110) || (msg[i] >= 65 && msg[i] < 78))
            msg[i] += 13;
        else if ((msg[i] >= 110 && msg[i] <= 122) || msg[i] >= 78 && msg[i] <= 90)
            msg[i] -= 13;
    }
    return msg;
}


int main()
{
	cout << rot13("test");
}

