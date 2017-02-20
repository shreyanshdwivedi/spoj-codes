#include <stdio.h>
int main()
{
	long long int n,a,k,c;
	while(1)
	{
		scanf("%lld",&n);
		if(n==-1)
			break;
		if(n==1)
			printf("Y\n");
		else
		{
		if(n%6==1)
		{
			a=n/6;
			k=1;
			c=2;
			while(k<a)
			{
				k+=c;
				c++;
			}
			if(k==a)
				printf("Y\n");
			else
				printf("N\n");
		}
		else 
			printf("N\n");
		}
	}
	return 0;
}

