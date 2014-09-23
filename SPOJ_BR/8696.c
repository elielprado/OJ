#include <stdio.h>

int main(){

	int dia = 0;
	int alt = 0;
	int lar = 0;
	int pro = 0;

	scanf("%d", &dia);
	scanf("%d", &alt);
	scanf("%d", &lar);
	scanf("%d", &pro);

	if(dia <= alt && dia <=lar && dia <= pro){
		printf("S");
	}else{
		printf("N");
	}  

	return 0;
}
