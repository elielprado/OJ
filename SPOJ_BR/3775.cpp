#include <cstdio>
#include <algorithm>

using namespace std;

int array[10000];

int main(){
	
	int n = 0;
	int m = 0;
	int x = 0;
	int i = 0;
	
	scanf("%d", &n);
	scanf("%d", &m);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	
	sort(array, array+n);
	reverse(array, array+n);
	for(i = 0; i < m; i++)
	{
		printf("%d\n", array[i]);
	}
	
}

