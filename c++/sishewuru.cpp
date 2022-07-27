#include <iostream>
using namespace std;

int force(double d)
{
    // write your code here......
    if (d > 0)
        cout << (int)(d + 0.5); //强制类型转换
    else
        cout << (int)(d - 0.5);

    return 0;
}

int doubleTran(double d) //使用double自动转换小数点后
{

    printf("%.0f", d);
    return 0;
}

using namespace std;
#include <math.h>

int intTran(double d) //直接使用int取整
{

    int a;
    a = d;
    if (fabs(a - d) > 0.5)
    {
        cout << (d > 0 ? a + 1 : a - 1) << endl;
    }
    else
        cout << a << endl;

    return 0;
}

int main(void)
{
    double d;
    cin >> d;
    doubleTran(d);
}
