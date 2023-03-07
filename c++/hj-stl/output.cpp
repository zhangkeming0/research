#include <iostream>
using namespace std;

int main(void)
{
    int i = 0;
    int sum;
    int t[100];
    int n, x;
    cin >> n;

    while (n--)
    {
        cin >> x;
        sum += x;

        if (cin.get() == '\n')
        {
            t[i++] = sum;
            sum = 0;
            cin >> n;
        }
    }

    for (int j = 0; j < i; j++)
        cout << t[j] << endl;
}