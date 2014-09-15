#include <iostream>

using namespace std;

int main()
{
	int n, a, rA, rM, m, d;
	cin >> n;
	a = n / 365;
	rA = n % 365;
	rM = rA % 30;
	m = rA / 30;
	d = rM % 30;
	cout << a << " ano(s)" << endl << m << " mes(es)" << endl << d << " dia(s)" << endl;
	
	return 0;
}