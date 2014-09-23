//problem: BIT
//url: http://br.spoj.com/problems/BIT/

#include <stdio.h>

int main(){

    int valor = 0;
    int i = 0; //50
    int iResto = 0;
    int j = 0; //10
    int jResto = 0;
    int k = 0; //5
    int kResto = 0;
    int l = 0; //1
    int lResto = 0;
    int contador = 1;

    do{

        scanf("%d", &valor);

        if(valor == 0){
            return 0;
        }

        i = valor/50;
        iResto = valor%50;

        j = iResto/10;
        jResto = iResto%10;

        k = jResto/5;
        kResto = jResto%5;

        l = kResto/1;

        printf("Teste %d \n", contador);
        contador++;
        printf("%d %d %d %d \n \n", i, j, k, l);

    }while(valor !=0);

    return 0;
}

