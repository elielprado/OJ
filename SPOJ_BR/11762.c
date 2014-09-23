#include <stdio.h>

int main(){

	int n = 0;
	int p = 0;
	int res = 0;
	int a = 0;//Pooooooooooodle

    do{

        scanf("%d", &n);
        scanf("%d", &p);

        if(n == 0 && p == 0){
            return 0;
        }

        res = n/p;

        if(n%p != 0){
            res = res + 1;
        }

        if(res <= 6){
            printf("Poodle\n");
        }

        if(res > 6 && res < 20){
            printf("P");

        for(a = 0; a < res - 4; a++){
            printf("o");
        }

        printf("dle\n");

    }

    if(res >= 20){
        printf("Poooooooooooooooodle\n");
    }


    }while(n != 0 && p != 0);

	return 0;
}

