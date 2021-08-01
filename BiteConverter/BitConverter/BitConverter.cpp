#include <iostream>
using namespace std;

int countBits(int value);

int main()
{
    int valuea;
    cout << "Value: ";
    cin >> valuea;
    valuea=countBits(valuea);
    cout << valuea;

    return 0;
}

// 15 == 1111
int countBits(int value)
{
    return (value > 0 ? countBits(value / 2) + value % 2 : 0);
    
    /*
        int onecounter = 0;
        for(;value>0;value/=2)
            if(value%2)
                onecounter++;

        return onecounter;
    */

    /*
    *   int onecounter = 0;
        while (value > 0)
        {
            if (value % 2 != 0)
                onecounter++;

               value /= 2;
        }
        return onecounter;
    */
}