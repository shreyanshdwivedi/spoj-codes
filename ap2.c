#include <stdio.h>
int main()
{
	long long int a,b,s,n,d,a1;
	int t,i,j;
	scanf("%d",&t);
	for(i=0; i<t; i++)
	{
		scanf("%lld %lld %lld",&a,&b,&s);
		n=(2*s)/(a+b);
		printf("%lld \n",n);
		d=(b-a)/(n-5);
		a1=a-2*d;
		for(j=0; j<n; j++)
			printf("%lld ",(a1+j*d));
	}
	return 0;
}
