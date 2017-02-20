#include <stdio.h>
int main()
{
	long long int t,n;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		double x=n/2.0;
		long long int y=(long long int)x;
		if(x!=y)
			printf("%lld\n",y);
		else 
		{
			if(y%2==0)
				printf("%lld\n",y-1);
			else
				printf("%lld\n",y-2);
		}
	}
	return 0;
}

