#include <stdio.h>

int main(){

    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    int n = 0, a = 0;
    int x = 0, y = 0;
    int contador = 1, contMeteoro = 0;

    do{

        scanf("%d", &x1);
        scanf("%d", &y1);
        scanf("%d", &x2);
        scanf("%d", &y2);

        if(x1 == 0 && y1 == 0 & x2 == 0 & y2 == 0){
            return 0;
        }

        scanf("%d", &n);

        for(a = 0; a < n; a++){

            scanf("%d", &x);
            scanf("%d", &y);

            if((x >= x1 && x <= x2) && (y <= y1 && y >= y2)){
                contMeteoro = contMeteoro + 1;
            }
        }

        printf("Teste %d\n", contador);
        contador++;
        printf("%d\n\n", contMeteoro);
        contMeteoro = 0;

    }while(x1 != 0);

    return 0;
}

