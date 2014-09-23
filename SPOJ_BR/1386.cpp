#include <stdio.h>

int main(){
    int r = 0;
    int a = 0;
    int b = 0;
    int x = 0;
    int res = 0;
    int resf = 0;
    int contador = 1;

    do{

        scanf("%d", &r);

        if(r == 0){
            return 0;
        }

        for(x = 0; x < r; x++){
            scanf("%d", &a);
            scanf("%d", &b);
            res = res + (a - b);
        }

        if(res > 0){
            printf("Teste %d\nAldo\n", contador);
        }else{
            printf("Teste %d\nBeto\n", contador);
        }

        res = 0;
        contador++;

    }while(r != 0);

    return 0;
}

