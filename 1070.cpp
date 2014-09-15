#include <iostream>
using namespace std;

int main()
{
	int x, tmp = 0;
	bool ver = false;
	cin >> x;
	
	while(ver == false && tmp != 6)
	{
		if(x % 2 == 1){
			cout << x << endl;
			tmp++;
		}
		x++;
	}
	
	return 0;
}