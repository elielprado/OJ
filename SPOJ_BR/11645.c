#include <stdio.h>

int main(){
	
	int n = 0;
	
	scanf("%d", &n);
	
	if (n == 0){
		printf("E");
	}else if (n >=1 && n <=35){
		printf("D");
	}else if (n >=36 && n <=60){
		printf("C");
	}else if (n >=61 && n <=85){
		printf("B");
	}else if (n >=86 && n <=100){
		printf("A");
	}

	return 0;
}
