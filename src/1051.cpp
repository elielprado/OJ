#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float n, res, faixa1, faixa2, faixa3;
	cin >> n;

	if(n <= 2000){
		cout << "Isento" << endl;
	}else{
		if(n > 2000 && n <= 3000){
			faixa1 = n - 2000;
			faixa1 = ((faixa1 * 8) / 100);
			res = faixa1;
		}else if(n > 3000 && n <= 4500){
			faixa1 = n - 2000;
			faixa2 = faixa1 - 1000;
			faixa1 -= faixa2;
			faixa1 = ((faixa1 * 8) / 100);
			faixa2 = ((faixa2 * 18) / 100);
			res = faixa2 + faixa1;
		}else{
			faixa1 = n - 2000;
			faixa2 = faixa1 - 1000;
			faixa3 = faixa2 - 1500;
			faixa1 -= faixa2;
			faixa2 -= faixa3;
			faixa1 = ((faixa1 * 8) / 100);
			faixa2 = ((faixa2 * 18) / 100);
			faixa3 = ((faixa3 * 28) / 100);
			res = faixa3 + faixa2 + faixa1;
		}
	}

	cout << "R$ " << fixed << setprecision(2) << res << endl;

	return 0;
}