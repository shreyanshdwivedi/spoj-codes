#include <stdio.h>
int main()
{
	long long int n,s=0,l,m,i,k;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&k);
		s=s^k;
	}
	printf("%lld",s);
	return 0;
}

