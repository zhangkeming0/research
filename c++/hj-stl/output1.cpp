#include <iostream>
using namespace std;

int main(void)
{
    int pairs;
    int sum;

    cin >> pairs;
    while (--pairs)
    {
        int n, x;
        cin >> n;
        while (n--)
        {
            cin >> x;
            sum += x;

            if (cin.get() == '\n')
            {
                cout << sum << endl;
                sum = 0;
                cin >> n;
            }
        }
    }
}