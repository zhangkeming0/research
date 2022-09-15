#include <iostream>

using namespace std;

int main(void)
{
    int num, sum;
    do
    {
        cout << "Enter a number: ";
        cin >> num;
        sum += num;
        cout << "The sum of numbers = " << sum << endl;
    } while (num);

    return 0;
}