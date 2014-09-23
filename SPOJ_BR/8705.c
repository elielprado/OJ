#include <stdio.h>

int main(){

	int l = 0;
	int d = 0;
	int k = 0;
	int p = 0;
	int res = 0;

	scanf("%d", &l);
	scanf("%d", &d);
	scanf("%d", &k);
	scanf("%d", &p);

	res = (l * k) + (((l/d) * p));

	printf("%d", res);

	return 0;
}

