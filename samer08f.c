#include <stdio.h>
int main()
{
	int n,i;
	long long int x,s;
	while(1)
	{
		s=0;
		scanf("%d",&n);
		if(n==0)
			break;
		for(i=n;i>1;i--)
		{
			s=s+(i*i);
		}
		x=s+1;
		printf("%lld\n",x);
	}
	return 0;
}
