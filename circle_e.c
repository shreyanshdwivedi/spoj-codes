#include <stdio.h>
#include <math.h>
int main()
{
	long long int i,t;
	double a,b,c,d;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		d=(a*b*c)/((a*b)+(b*c)+(c*a)+(2*sqrt(a*b*c*(a+b+c))));
		printf("%lf\n",d);
	}
	return 0;
}
