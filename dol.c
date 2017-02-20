#include <stdio.h>
int main()
{
	int t,i;
	unsigned long long int n;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%llu",&n);
		if(n%2!=0)
			printf("Case %d: %llu\n",i,n);
		else
		{	while(n%2==0)
			{
				n=n/2;
			}
			printf("Case %d: %llu\n",i,n);
		}
	}
	return 0;
}
