#include <stdio.h>
int main()
{
	int t;
	unsigned long long int n,m,sd;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%llu",&n);
		while(1)
		{
			m=n;
			sd=0;
			while(m!=0)
			{
				sd+=(m%10);
				m=m/10;
			}
			if(n%sd==0)
			{
				printf("%llu\n",n);
				break;
			}
			n++;
		}
	}
	return 0;
}
