#include <stdio.h>

int main(){

    int n = 0;
    int c = 0;

    scanf("%d", &n);

    if(n < 0){
        n = -n;
    }

    if(n == 0 || n == 1){
        printf("nao");
    }else{
        for ( c = 2 ; c <= n - 1 ; c++ ){

            if ( n%c == 0 ){
                printf("nao");
                break;
            }
        }
            if ( c == n )
                printf("sim");

            return 0;
    }
}

