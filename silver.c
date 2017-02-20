#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	double k;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		k=log2(n);
		printf("%d\n",(int)k);
	}
	return 0;
}

