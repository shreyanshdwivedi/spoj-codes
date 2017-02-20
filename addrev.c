#include <stdio.h>
#include <math.h>
int rev(int);
int main()
{
	long int a;
	int i,n,m,N,M,s=0,S;
	scanf("%ld",&a);
	for(i=0; i<a; i++)
	{
		scanf("%d %d",&n,&m);
		N=rev(n);
		M=rev(m);
		s=N+M;
		S=rev(s);
		printf("%d \n",S);
	}
	return 0;
}
int rev(int x)
{
	int y=x,c=0,a=0,r,i;
	while(y!=0)
	{
		y=y/10;
		c++;
	}
	int k=c;
	for(i=c; i>0; i--)
	{
		r=x%10;
		x=x/10;
		a=a+(r*pow(10,k-1));
		k--;
	}
	return a;
}
