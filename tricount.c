#include <stdio.h>
int main()
{
	long long int s,k,r,t,n,c,i,j;
	scanf("%lld",&t);
	c=0;
	for(i=0;i<t;i++)
	{
		c=0;
		s=0;
		scanf("%lld",&n);
		if(n==1)
			printf("1\n");
		else
		{
			k=1;
			while((n-k)>0)
			{
				if(k%2!=0)
					c=((n-k)*(n-k+1));
				else
					c=((n-k)*(n-k+1))/2;
				s+=c;
				k++;
			}
			//r=(n*n)+n+s-1;
			printf("%lld\n",s);
		}

	}
	return 0;
}
