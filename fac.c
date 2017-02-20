#include <stdio.h>
int fac(int x);
int main()
{
int t,n,j,f;
scanf("%d",&t);
for(j=0; j<t; j++)
{
	scanf("%d",&n);
	f=fac(n);
	printf("%d\n",f);
}
return 0;
}
int fac(int x)
{
	int i,k=1;
	for(i=1; i<=x; i++)
	{
		k=k*i;
	}
	return (k);
}
