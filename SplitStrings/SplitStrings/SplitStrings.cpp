/*
* SORU:
* Complete the solution so that it splits the string into pairs of two characters. If the string contains an odd number of characters then it should replace the missing second character of the final pair with an underscore ('_'). 
* Examples:
*   solution("abc") // should return {"ab", "c_"}
*   solution("abcdef") // should return {"ab", "cd", "ef"}
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Fonksiyon Bildirimi
vector<string> solution(const string& s);

int main()
{   
    solution("abcdef");
}

vector<string> solution(const string& s)
{
    /*
    * Temp = İki harf değerini geçici olarak tutmak amacıyla oluşturduğumuz değişken.Örneğin Merhaba >> Me
    * Result vector tanımı ise her iki harf için tutmak üzere tanımladığımız vector'dür. Soruda fonksiyon vector döndürmemizi istemektedir.
    */
    int strLen = s.length();
    string temp = "";
    vector<string> result;

    //For döngüsü içerisinde ikişerli olarak indisleri gezerek vector içerisine atıyoruz.
    for (int i = 0; i <= strLen; i++)
    {
        if (i%2==0 && i!=0)
        {
            result.push_back(temp);
            temp = "";
        }
        temp += s[i];
    }

    //Burdaki kontrol çift sayıda karakter uzunluğuna sahip olamayan kelimelerde en son indisi çift yapabilmek amacıyla sonuna "_" işareti eklememiz için kontrol sağlıyor.
    if (strLen % 2 != 0)
    {
        temp = s[strLen - 1];
        temp += "_";
        result.push_back(temp);
    }

    for (int i = 0; i < result.size(); i++)
        cout << result.operator[](i) << " ";

    return result;
}