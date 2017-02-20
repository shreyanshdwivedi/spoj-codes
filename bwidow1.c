#include <stdio.h>
int main()
{
	int t,n,i,j,c,pos;
	long long int max;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		c=0;
		max=0;
		scanf("%d",&n);
		long long int r[n],R[n];
		for(j=0;j<n;j++)
		{
			scanf("%lld %lld",&r[j],&R[j]);
			if(max<r[j])
			{
				max=r[j];
				pos=j;
			}
		}
		for(j=0;j<n;j++)
		{
			if(R[j]<max && pos!=j)
				c++;
		}
		if(c==(n-1))
			printf("%d \n",pos+1);
		else
			printf("-1 \n");
	}
	return 0;
}
