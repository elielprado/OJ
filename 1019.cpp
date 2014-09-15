#include <iostream>

using namespace std;

int main()
{
	int t, h, m;
	cin >> t;
	h = t / 3600;
	t = t - (h * 3600);
	m = t / 60;
	t = t - (m * 60);
	cout << h << ":" << m << ":" << t << endl;

	return 0;
}