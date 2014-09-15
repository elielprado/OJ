#include <cstdio>

int main()
{
	int n;
	double a, b, c, med;
	scanf("%i", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%lf %lf %lf", &a, &b, &c);
		med = ((a/10) * 2) + ((b/10) * 3) + ((c/10) * 5);
		printf("%.1f\n", med);
	}

	return 0;
}