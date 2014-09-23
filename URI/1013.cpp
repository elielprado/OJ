#include <cstdio>

int main()
{
	int a, b, c, tmp;
	
	scanf("%i %i %i", &a, &b, &c);
	tmp = a;

	if(a < b || a < c){
		if(b < c){
			tmp = c;
		}else{
			tmp = b;
		}
	}

	printf("%i eh o maior\n", tmp);

	return 0;
}