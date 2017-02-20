#include <stdio.h>

long int hcf(long int n1,long int n2)
{
	if (n2 != 0)
	        return hcf(n2, n1%n2);
	else 
		return n1;
}
int main()
{
	long int t,a,b,c,i,g;
	scanf("%ld",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%ld %ld %ld",&a,&b,&c);
		g=hcf(a,b);
		if(c%g==0)
			printf("Case %ld: Yes\n",i);
		else
			printf("Case %ld: No\n",i);
	}
	return 0;
}

