#include <stdio.h>
#include <math.h>
int main()
{
	int t,a,q,r,s;
	long long int b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %lld",&a,&b);
		q=b%4;
		s=a%10;
		if(q==0)
			q=4;
		r=(int)pow(s,q)%10;
		printf("%d\n",r);
	}
	return 0;
}


