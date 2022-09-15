#include <iostream>
#include <string>

using namespace std;
const int ArSize = 15;

int main(void)
{
    long long factorial[ArSize];
    factorial[0] = factorial[1] = 1;

    for (int i = 2; i < ArSize; i++)
    {
        factorial[i] = i * factorial[i - 1];
    }
    for (int i = 0; i < ArSize; i++)
    {
        std::cout << i << "! = " << factorial[i] << std::endl;
    }

    using std ::cin;
    using std::cout;
    using std::endl;
    std::string word;
    cin >> word;
    for (int i = word.size() - 1; i >= 0; i--)
    {
        cout << word[i];
    }
    cout << endl;
    return 0;
}
