#include <stdio.h>

int main(){
    int a = 0;
    int n = 0;
    int f = 0;
    int x = 0;
    int res = 0;
    int teste = 40000000;
    int counter = 0;

    scanf("%d", &a);
    scanf("%d", &n);

    for(x = 0; x < n; x++){

        scanf("%d", &f);
        res = a * f;

        if(res >= teste){
            counter = counter + 1;
        }

        res = 0;
    }

    printf("%d", counter);

    return 0;
}

