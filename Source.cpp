#include <iostream>

using namespace std;

int main()
{
	int i, u = 0, v = 1, w, n;
	cout << "please enter a value:";
	cin >> n;

	w = 1;
	for (i = 2; i <= n; i++)
	{
		w = u + v;
		u = v;
		v = w;

	}
	cout << "u(" << n << ")=" << w << endl;
	system("pause");

	return 0;
}