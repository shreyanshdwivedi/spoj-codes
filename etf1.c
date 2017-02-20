#include <stdio.h>
long long int phi(long long int);
int gcd(long long int,long long int);
int main()
{
	long long int n,t,i;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		printf("%lld\n",phi(n));
	}
	return 0;
}

long long int phi(long long int n)
{
	long long int i,r=1;
	for(i=2;i<n;i++)
	{
		if(gcd(n,i)==1)
			r++;
	}
	return r;
}

int gcd(long long int a,long long int b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}

