#include <cstdio>

int main()
{
	double n, ctr = 0, tmp = 0;
	
	for(int i = 0; i < 6; ++i)
	{
		scanf("%lf", &n);
		if(n > 0){
			tmp += n;
			ctr++;
		}
	}
	
	printf("%.0lf valores positivos\n%.1lf\n", ctr, tmp/ctr);
	
	return 0;
}