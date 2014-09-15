#include <cstdio>

int main()
{
	double a, b, c;
	scanf("%lf", &a, &b, &c);
	printf("MEDIA = %.1lf\n", ((a/10 * 2) + (b/10 * 3) + (c/10 * 5)));

	return 0;
}