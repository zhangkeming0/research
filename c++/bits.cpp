#include <iostream>

using namespace std;

int main(void)
{
    int number;
    int bit = 0;
    cout << "Please input a number: ";
    cin >> number;
    int n = number;
    while (n)
    {
        n = n / 10;
        bit++;
    }
    cout << bit << endl;
    int *a = new int[bit];
    a[0] = number / 100000;
    a[1] = (number % 100000) / 10000;
    a[2] = ((number % 100000) % 10000) / 1000;
    a[3] = (((number % 100000) % 10000) % 1000) / 100;
    a[4] = ((((number % 100000) % 10000) % 1000) % 100) / 10;
    a[5] = ((((number % 100000) % 10000) % 1000) % 100) % 10;

    cout << a[5] << a[4] << a[3] << a[2] << a[1] << a[0] << endl;
    delete[] a;
    return 0;
}