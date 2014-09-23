#include <stdio.h>

int main(){

	int n = 0;
	int a = 0;
	int v = 0;
	int t = 0;
	int res = 0;
	
	scanf("%d", &n);
	
	for(a = 0; a < n; a++){
		scanf("%d", &v);
		scanf("%d", &t);
		
		res = res + (v * t);
	}
	
	printf("%d", res);
	
	return 0;
}
