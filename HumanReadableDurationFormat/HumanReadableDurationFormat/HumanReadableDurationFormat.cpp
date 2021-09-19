/*
    Your task in order to complete this Kata is to write a function which formats a duration, given as a number of seconds, in a human-friendly way.
    The function must accept a non-negative integer. If it is zero, it just returns "now". Otherwise, the duration is expressed as a combination of years, days, hours, minutes and seconds.
    It is much easier to understand with an example:

    format_duration(62)    // returns "1 minute and 2 seconds"
    format_duration(3662)  // returns "1 hour, 1 minute and 2 seconds"
    For the purpose of this Kata, a year is 365 days and a day is 24 hours.

    Note that spaces are important.
*/

#include <iostream>
#include <string>
using namespace std;

string format_duration(int seconds);

int main()
{
    int a = 46;
    printf("Merhaba %d", a);
    

    cout << format_duration(78);
}


string format_duration(int seconds) {

    int second = seconds, hour = 0, minute = 0;

    minute = second / 60;
    second = second % 60;
    hour = minute / 60;
    minute = minute % 60;

    string alltext;
    
}
