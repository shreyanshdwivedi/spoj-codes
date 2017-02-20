#include <stdio.h>
int main()
{
	long long int r,k,i,t,j,s,n;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		j=1;
		s=0;
		while(n-j>0)
		{
			r=((n-j)*(n-j+1))/2;
			if(j>=3 && j%2==1)
				s=s+2*r;
			else
				s=s+r;
			j++;
		}
		s=s+n*n;
	/*	k=3;
		while(n-k>0)
		{
			s=s+((n-k)*(n-k+1))/2;
			k+=2;
		}*/
		printf("%lld \n",s);
	}
	return 0;
}

