#include <stdio.h>
int main()
{
	int t;
	long long int n,i,j;
	float r;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		r=n;
		for(j=2;j*j<=n;j++)
		{
			if(n%j==0)
			{
				r=r*(1-1.0/(float)j);
				while(n%j==0)
					n=n/j;
			}
		}
		if(n>1)
			r=r*(1-1.0/(float)n);
		printf("%d\n",(int)r);
	}
	return 0;
}
