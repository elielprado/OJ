#include <stdio.h>

int main(){
    int c = 0;
    int p = 0;
    int f = 0;
    int div = 0;

    scanf("%d", &c);
    scanf("%d", &p);
    scanf("%d", &f);

    div = p / c;

    if(div >= f){
        printf("S");
    }else{
        printf("N");
    }

    return 0;
}

