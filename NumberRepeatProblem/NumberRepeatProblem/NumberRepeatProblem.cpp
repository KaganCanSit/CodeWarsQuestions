/*
Enough is enough!
Alice and Bob were on a holiday. Both of them took many pictures of the places they've been, and now they want to show Charlie their entire collection. However, Charlie doesn't like these sessions,
since the motive usually repeats. He isn't fond of seeing the Eiffel tower 40 times. He tells them that he will only sit during the session if they show the same motive at most N times. 
Luckily, Alice and Bob are able to encode the motive as a number. Can you help them to remove numbers such that their list contains each number only up to N times, without changing the order?

Task
Given a list lst and a number N, create a new list that contains each number of lst at most N times without reordering. For example if N = 2, and the input is [1,2,3,1,2,1,2,3], you take [1,2,3,1,2],
drop the next [1,2] since this would lead to 1 and 2 being in the result 3 times, and then take 3, which leads to [1,2,3,1,2,3].

For C:
Assign the return array length to the pointer parameter *szout.
Do not mutate the input array.
Example
delete_nth(4, {1, 1, 1, 1}, 2, *p)     // returns {1, 1}, 2
delete_nth(4, {20, 37, 20, 21}, 1, *p) // returns {20, 37, 21}, 3   
*/

#include <iostream>

using namespace std;

int* delete_nth(int szin, int* order, int max_e, int* szout);

int main()
{
    int dizi[4] = { 1,1,1,1 };
    int sayi = 4;
    cout << *delete_nth(sayi, dizi, 2, &sayi);

    return 0;
}

int* delete_nth(int szin, int* order, int max_e, int* szout)
{
    int counter = 0;
    int array[50];

    for (int a = 0; a < szin; a++)
        array[a] = order[a];

    for (int i = 0; i < szin; i++)
    {
        for (int j = 0; j < szin; j++)
        {
            if (array[i] == array[j])
            {
                counter++;
                if (counter > max_e)
                {
                    for (int a = j - 1; a < szin - 1; a++)
                    {
                        array[a] = array[a + 1];
                    }
                    szin--;
                }
            }
        }
        counter = 0;
    }

    szout = &szin;

    return array* , szout;
}