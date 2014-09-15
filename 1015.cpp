#include <cstdio>
#include <cmath>

int main()
{
	int x1, x2, y1, y2;
	scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
	double d = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	printf("%.4lf\n", d);
	return 0;
}