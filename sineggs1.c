#include <stdio.h>
int main()
{
	long long int n,t,i,j,k,c,p;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		k=n;
		j=2;
		p=1;
//		printf("hi\n");
		while(k!=0 && k!=1)
		{
//			printf("Kya\n");
			c=0;
			while(k%j==0)
			{
//				printf("ho\n");
				k=k/j;
				c++;
				if(k==0)
					break;
			}
			p=p*(c+1);
			j++;
			if(k==0)
				break;
		}
		if(p%2==0)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
