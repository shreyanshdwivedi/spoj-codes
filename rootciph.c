#include <stdio.h>
//#include <math.h>
int main()
{
	long long int t,a,b,c,i,d,e;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld %lld %lld",&a,&b,&c);
		//d=b/a;
		e=a*a-(2*b);
		printf("%lld\n\n",e);
	}
	return 0;
}
