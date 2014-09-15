#include <cstdio>
#include <cmath>

int main()
{
	double a, b, c, t, r1, r2;
	scanf("%lf %lf %lf", &a, &b, &c);
	t = sqrt((b * b) - 4 * a * c);
	
	if(t < 0 || a == 0){
		printf("Impossivel calcular\n");
	}else{
		printf("R1 = %.5lf\nR2 = %.5lf\n", ((-b + t) / (2 * a)), (-b - t) / (2 * a));
	}

	return 0;
}