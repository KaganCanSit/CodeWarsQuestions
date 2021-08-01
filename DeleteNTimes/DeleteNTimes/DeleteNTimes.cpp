#include <iostream>
#include <vector>

using namespace std;

vector<int> deleteNth(vector<int> arr, int n);

int main(void)
{
    vector<int> deneme;
    deneme.push_back(15);
    deneme.push_back(49);
    deneme.push_back(49);
    deneme.push_back(4);
    deneme.push_back(6);
    deneme.push_back(7);
    deneme.push_back(15);
    deneme.push_back(49);
    deneme.push_back(6);
    deneme.push_back(49);
    deneme.push_back(6);
    deneme.push_back(7);
    deneme.push_back(7);
    deneme.push_back(15);
    deneme.push_back(15);
    deneme.push_back(7);
    deneme.push_back(4);
    deneme.push_back(6);
    deneme.push_back(4);
    deneme.push_back(4);
    deneme.push_back(4);
    deneme.push_back(19);
    deneme.push_back(19);
    deleteNth(deneme,1);
}

vector<int> deleteNth(vector<int> arr, int n)
{
    vector<int> temparr;
    int counter = 0, vectorsize=arr.size();

    for (int i = 0; i < vectorsize; i++)
        temparr.push_back(arr[i]);

    for (int i = 0; i < vectorsize; i++)
    {
        for (int j = 0; j < vectorsize; j++)
        {
            if (temparr.operator[](i) == temparr.operator[](j))
            {
                counter++;
                if (counter > n)
                {
                    temparr.erase(temparr.begin() + j);
                    vectorsize--;
                    j--;
                }
            }
        }
        counter = 0;
    }

    return temparr;
}