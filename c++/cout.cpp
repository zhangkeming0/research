#include <iostream>
const int DEGREE_TO_MINUTE = 60;
const int DEGREE_TO_SECOND = 3600;
using namespace std;
int main(void)
{
    int degree, minute, second;
    cout << "请输入纬度（以度、分、秒的格式）：";
    cin >> degree;
    cin >> minute;
    cin >> second;

    double degree_style = degree + (double)minute / DEGREE_TO_MINUTE + (double)second / DEGREE_TO_SECOND;
    cout << degree << " degree " << minute << " minute " << second << " second = "
         << "该纬度为：" << degree_style << endl;

    return 0;
}