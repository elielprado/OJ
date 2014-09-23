#include <cstdio>



int main()
{
	int n = 0;
	int m = 0;
	int x = 0;
	int temp = 0;
	int tempLinha = 0;
	int tempColuna = 0;
	
	int i = 0;
	int j = 0;
	
	scanf("%d", &n);
	scanf("%d", &m);
	
	int array[n][m];
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			scanf("%d", &array[i][j]);	
		}
	}
	
	for(i = 0; i < n; i++)
	{
		temp = 0;
		for(j = 0; j < m; j++)
		{
			temp += array[i][j];	
		}
		
		if(tempLinha < temp)
		{
			tempLinha = temp;
		}
		
	}
	
	for(j = 0; j < m; j++)
	{
		temp = 0;
		for(i = 0; i < n; i++)
		{
			temp += array[i][j];
		}
		
		if(tempColuna < temp)
		{
			tempColuna = temp;
		}
	}
	
	if(tempColuna < tempLinha)
	{
		printf("%d", tempLinha);
	}else
	{
		printf("%d", tempColuna);
	}
	
}

