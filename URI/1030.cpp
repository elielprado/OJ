#include <cstdio>
using namespace std;

int josephus(int n, int k, int startingPoint)
{
	if(n == 1)
		return 1;

	int newSp, survivor;
	newSp = (startingPoint + k - 2) % n + 1;
 	survivor = josephus(n - 1, k, newSp);

 	if(survivor < newSp){
 		return survivor;
 	}else{
 		return survivor + 1;
 	}
}

int main()
{
	int nc, n, k, s;
	scanf("%i", &nc);

	for (int i = 1; i <= nc; ++i)
	{
		scanf("%i %i", &n, &k);
		s = josephus(n, k, 1);
		printf("Case %i: %i\n", i, s);
	}

	return 0;
}

