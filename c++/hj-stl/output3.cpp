#include <iostream>

using namespace std;

int main(void)
{
    int x;
    int sum = 0;
    cin >> x;
    while (!cin.eof())
    {
        if (cin.get() == '\n')
        {
            cout << sum << endl;
            sum = 0;
        }
        else
        {
            sum += x;
            cin >> x;
        }
    }

    return 0;
}