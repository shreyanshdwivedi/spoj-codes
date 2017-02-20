#include <stdio.h>
long long int fac(int);
long long int fac(int n)
{
	long long int i,p;
	p=1;
	for(i=2;i<=n;i++)
	{
		p*=i;
	}
	return p;
}
int main()
{
	int a,b,t,n,i;
	long long int r,s,c,z,m,x,y;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d %d",&a,&b,&n);
		r=0;
		while(r!=n)
		{
			x=fac(n)/(fac(r)*fac(n-r));
			s+=(x*x);
			r++;
		}
	//	z=pow(b,s);
		c=0;
		while(c!=s)
		{
			z*=b;
			//if(z>1000000007)
			z=z%1000000007;
			c++;
		}
		c=0;
		while(c!=z)
		{
			m*=a;
			m=m%1000000007;
			c++;
		}
		printf("%lld\n",m);
	}
	return 0;
}


