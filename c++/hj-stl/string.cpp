#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    for (int i = 0; i < 2; i++)
    {
        string str[2];
        cin >> str[i];
        cout << str[i] << " ";
    }

    return 0;
}