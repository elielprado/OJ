#include <stdio.h>

int main(){

    int casos = 0;
    int a = 0;
    int valor = 0;
    int contador = 1;
    int premiado = 0;
    int contadorTeste = 1;

    do{

        scanf("%d", &casos);

        if(casos != 0){

            for(a = 0; a < casos; a++){

            scanf("%d", &valor);

            if(valor == contador){
                premiado = valor;
                }
            contador++;

            }

            printf("Teste %d \n", contadorTeste);
            contadorTeste++;
            printf("%d \n \n", premiado);
            contador = 1;

        }

    }while(casos != 0);

    return 0;

}

