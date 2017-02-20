#include <stdio.h>
int main()
{
	int t;
//	long long int a,n;
//	scanf("%d",&t);
	while(1)
	{
		scanf("%lld",&n);
		a=(n/2)+(n/3)+(n/4);
		if(a>n)
			printf("%lld\n",a);
		else
			printf("%lld\n",n);
	}
	return 0;
}
