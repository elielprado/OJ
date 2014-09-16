#include <cstdio>

int main()
{
	double val, count = 2;

	for (int i = 2; i <= 100; ++i)
	{
		val = val + 1/count;
		count++;
	}
	val++;

	printf("%.2f\n", val);
	return 0;
}