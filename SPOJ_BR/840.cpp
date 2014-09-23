#include <stdio.h>

int main(){

    int n = 0;
    int j = 0;
    int z = 0;
    long long int res = 0;
    int a = 0;
    int contador = 1;


    do{

        scanf("%d", &n);

        if(n == 0){
                return 0;
        }

        long long int x[n];

        for(a = 0; a < n; a++){
            scanf("%d", &j);
            scanf("%d", &z);
            res = res + (j - z);
            x[a] = res;
        }

        printf("Teste %d\n", contador);

        for(a = 0; a < n; a++){
            printf("%lld\n", x[a]);
        }

        printf("\n");
        contador++;

        res = 0;

    }while(n != 0);

    return 0;
}

