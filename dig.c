#include <stdio.h>
#include <math.h>
int main()
{
	long long int k,i,a,b,t,n;
	scanf("%lld",&t);
	double p;
	b=1000000007;
	for(i=0;i<t;i++)
	{
		scanf("%llu",&n);
		k=n;
		p=0.041666667;
		printf("%lf\n",p);
		while(1)
		{
	//		printf("while\n");
			p=p*k;
			if(p>b)
				p=fmod(p,b);
	//			printf("if\n");}
			k=k-1;
		//	printf("k= %lld\n",k);
			if(k<(n-3))
				break;
		}
		printf("%lf\n",p);

	}
	return 0;
}

