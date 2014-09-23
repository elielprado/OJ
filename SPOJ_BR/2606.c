#include <stdio.h>

int main(){

    float a = 0;
    float g = 0;
    float ra = 0;
    float rg = 0;
    float resa = 0;
    float resg = 0;

    scanf("%f", &a);
    scanf("%f", &g);
    scanf("%f", &ra);
    scanf("%f", &rg);

    resa = ra/a;
    resg = rg/g;

    if(resg >= resa){
        printf("G");
    }else{
        printf("A");
    }


    return 0;
}

