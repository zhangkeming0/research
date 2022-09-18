
#include <iostream>
using namespace std;

int main(void)
{
	int a, b, sum;
	int s = 0;
	// cin >> a;
	// cin >> b;
	// sum = a + b;
	for (int i = 0; i <= 2; i++)
	{
		s += 1 << i;
	}
	cout << s << endl;

	return 0;
}