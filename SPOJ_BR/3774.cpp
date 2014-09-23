#include <stdio.h>

int main(){

    int n = 0;
    int a = 0;
    int res = 1;

    scanf("%d", &n);

    if(n == 1 || n == 0){
        printf("1");
    }else{

        for(a = 0; a = n; a++){
            res = res * n;
            n--;
        }
        printf("%d", res);
    }

    return 0;

}

