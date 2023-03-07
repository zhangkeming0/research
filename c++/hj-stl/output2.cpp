#include <iostream>

using namespace std;

int main(void)
{
    int lines;
    cin >> lines;
    while (lines--)
    {
        int x = 0, n, sum;
        cin >> n;
        if (cin.get() == '\n')
            break;
        while (n--)
        {
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}