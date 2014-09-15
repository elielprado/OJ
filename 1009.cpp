#include <cstdio>

int main()
{
	double a, b;
	char word[256];
	scanf("%s %lf %lf", &word, &a, &b);
	printf("TOTAL = R$ %.2lf\n", a + ((b/100)*15));

	return 0;
}