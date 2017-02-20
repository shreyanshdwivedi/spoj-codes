#include <stdio.h>
#include <math.h>
int main()
{
	long long int i,t,a,l,s,b,c,d,e,f,g,n,a1;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		g=0;
		scanf("%lld %lld %lld",&a,&l,&s);
		b=(22*a)+(14*l)-(4*s);
		c=(12*a*a)+(14*a*l)+(4*l*l)-(4*a*s);
		e=sqrt(((b*b)-(24*c)));
		a1=(b+e)/12;
		//a2=(b-e)/12;
		f=(3*a)-a1+(2*l);
		n=(4*s)/f;
		d=(a-a1)/2;
		//printf("%lld\n",d);

		printf("%lld\n",n);
		while(g!=n)
		{
			printf("%lld ",(a1+g*d));
			g++;
		}
		printf("\n");
	}
	return 0;
}

		

