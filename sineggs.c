#include <stdio.h>
#include <math.h>
int main()
{
	long long int i,j,d,t,n;
	double c;
	scanf("%lld",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%lld",&n);
		c=sqrt(n);
		d=llrintl(c);
		if(c==d)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
