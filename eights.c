#include <stdio.h>
#include <math.h>
int main()
{
	unsigned long long int i,n,t,k;
	scanf("%llu",&t);
	for(i=0; i<t; i++)
	{
		scanf("%llu",&k);
		n=192+(k-1)*250;
		printf("%llu\n",n);
	}
	return 0;
}
