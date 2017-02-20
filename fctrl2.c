#include <stdio.h>
unsigned long long int fac(int);
int main()
{
	int i,t,n;
	scanf("%d",&t);
	unsigned long long int f;
	for(i=0; i<t;i++)
	{
		scanf("%d",&n);
		f=fac(n);
		printf("%llu \n",f);
	}
return 0;
}
unsigned long long int fac(int x)
{
int f;
if(x==1)
	return 1;
else
	f=x*fac(x-1);
return f;
}
