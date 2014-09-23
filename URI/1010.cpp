#include <cstdio>

int main()
{
	int a, b;
	double c, res, tmp;

	for (int i = 0; i < 2; ++i)
	{
		scanf("%i %i %lf", &a, &b, &c);
		tmp = 0;

		for (int j = 0; j < b; ++j)
			tmp += c;

		res += tmp;
	}

	printf("VALOR A PAGAR: R$ %.2lf\n", res);

	return 0;
}