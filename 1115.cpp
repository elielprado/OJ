#include <cstdio>

int main()
{
	int x, y;
	scanf("%i %i", &x, &y);

	if(x == 0 || y == 0)
			return 0;

	while(x != 0 || y != 0){

		if(x > 0 && y > 0){
			printf("primeiro\n");
		}
		if(x < 0 && y > 0){
			printf("segundo\n");
		}
		if(x < 0 && y < 0){
			printf("terceiro\n");
		}
		if(x > 0 && y < 0){
			printf("quarto\n");
		}

		scanf("%i %i", &x, &y);
		if(x == 0 || y == 0)
			return 0;
	}

	return 0;
}