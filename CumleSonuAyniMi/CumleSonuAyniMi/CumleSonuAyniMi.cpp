#include <iostream>
#include <string.h>

/*
    Description:
    Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

    Examples:

    strEndsWith('abc', 'bc') -- returns true
    strEndsWith('abc', 'd') -- returns false
*/

bool solution(const char* a, const char* b);

int main()
{
    bool sonuc;
    sonuc=solution("ails", "fails");
    std::cout << sonuc;
}

bool solution(const char* string, const char* ending)
{
    int sizea = 0, sizeb = 0;
    sizea = strlen(string);
    sizeb = strlen(ending);

    while (true)
    {
        sizea--;
        sizeb--;

        if (sizeb == -1)
            return true;
        else if (string[sizea] != ending[sizeb] || sizea < sizeb)
            return false;      
    }

    /*
        EN İYİ ÇÖZÜM
        int len = strlen(string) - strlen(ending);
        return len < 0 ?false :strcmp(string + len, ending) == 0;
    */
}