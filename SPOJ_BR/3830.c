#include <stdio.h>

int main(){

    int cont = 0;
    int val = 0;
    int a = 0;
    int res = 0;

    scanf("%d", &cont);

    for(a = 0; a < cont; a++){

        scanf("%d", &val);
        res = res + val;

    }

    printf("%d", res);

    return 0;
}

