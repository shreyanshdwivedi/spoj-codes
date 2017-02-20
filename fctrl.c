#include <stdio.h>
#include <math.h>
int main()
{
	long long int j,n,t,c,i;
	long double a;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		c=0;
		scanf("%lld",&n);
		j=1;
		while(1)
		{
			a=pow(5,j);
			if((n/a)>=1)
				c+=(n/a);
			else
				break;
			j++;
		}

		printf("%lld\n",c);
	}
	return 0;
}
