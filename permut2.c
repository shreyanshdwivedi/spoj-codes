#include <stdio.h>
int main()
{
	long long int i,c,n;
	while(1)
	{
		c=-1;
		scanf("%lld",&n);
		if(n==0)
			break;
		long long int a[n],b[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			b[(a[i]-1)]=i+1;
		}
		for(i=0;i<n;i++)
		{
			if(a[i]!=b[i])
			{	c=0;
				break;
			}
		}
		if(c==0)
			printf("not ambiguous\n");
		else
			printf("ambiguous\n");
	}
	return 0;
}
