#include <iostream>
using namespace std;

/**
 * @brief 主函数
 *
 * 程序的入口函数。
 *
 * @return 返回值
 */
int main(int argc, char *argv[]) {
  // 定义变量v1和v2并初始化为0
  int v1 = 0, v2 = 0;
  // 从标准输入读取v1和v2的值
  cin >> v1 >> v2;
  // 输出v1和v2的和
  cout << "the sum of v1" << v1 << " and v2" << v2 << " is " << v1 + v2 << endl;
  // 返回0表示程序正常结束
  return 0;
}