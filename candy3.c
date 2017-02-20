#include <stdio.h>
#include <math.h>
int main()
{
	long long int a,i,j,n,s,r,t;
	double k;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		s=0;
		scanf("%lld",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a);
			s=s+a;
		}
//		printf("s= %lld\n",s);
		k=(double)s/n;
		r=llrintl(k);
//		printf("%lf %lld\n",k,r);
		if(r==k)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

