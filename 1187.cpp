#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int ini = 1, fim = 11;
	char c;
	double x, tmp = 0;

	double matrix[12][12];

	cin >> c;

	for (int i = 0; i < 12; ++i)
	{
		for (int j = 0; j < 12; ++j)
		{
			cin >> x;
			matrix[i][j] = x;
		}
	}

	for (int i = 0; i < 6; ++i)
	{
		if(ini < fim){
			for (int j = ini; j < fim; ++j)
			{
				tmp += matrix[i][j];
			}
		}
		ini++;
		fim--;
	}

	if(c == 'S'){
		cout << fixed << setprecision(1) << tmp << endl;
	}else{
		cout << fixed << setprecision(1) << tmp/30 << endl;
	}

	return 0;
}