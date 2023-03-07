#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    /*int n;
    cin >> n;
    string str[n];
*/
    int s = 0;
    string str[100];
    while (str[s] != "\n")
    {
        cin >> str[s++];
    }

    //冒泡排序
    for (int i = 1; i < s; i++)
    {
        string tmp = str[i];
        int j = i - 1;
        while (j >= 0 && str[j] > tmp)
        {
            str[j + 1] = str[j];
            j--;
        }
        str[j + 1] = tmp;
    }
    for (string t : str)
    {
        cout << t << " ";
    }

    return 0;
}