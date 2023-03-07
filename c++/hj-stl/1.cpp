#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main(void)
{
    int va[6] = {27, 210, 12, 47, 109, 83};
    vector<int, allocator<int>> vi(va, va + 6); // 前闭后开，[0,6),即end指向最后一个元素的下一个元素
    vector<int>::iterator ite = vi.begin();     // 需要声明对应容器的迭代器类型！
    for (; ite != vi.end(); ++ite)              // 迭代器用于遍历容器内容
        cout << *ite << " ";

    cout << endl;
    cout << count_if(vi.begin(), vi.end(), not1(bind2nd(less<int>(), 40))); // 计数，小于40取反，绑定第二参数40
    cout << endl;
    for (int i : {1, 2, 3, 4, 5, 6})
        cout << i << ";";
    for (auto &elem : vi)
        elem *= 3;
    cout << endl;
    for (auto elem : vi)
        cout << elem << ";";
    return 0;
}