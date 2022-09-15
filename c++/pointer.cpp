#include <iostream>

using namespace std;

int main(void)
{
    double wages[3] = {30000.0,
                       20000.0,
                       10000.0};
    short stacks[3] = {3, 2, 1};
    double *pw = wages;
    short *ps = &stacks[0];

    cout << "pw = " << pw << " , *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to pw = " << pw << " , *pw = " << *pw << endl;
    cout << "ps = " << ps << " , *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to ps = " << ps << " , *ps = " << *ps << endl;

    return 0;
}
