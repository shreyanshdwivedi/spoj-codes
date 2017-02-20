#include <stdio.h>
#include <string.h>
int main()
{
	char a[1000001];
	long long int n,i,t,A,B,l,j,c=0;
	scanf("%lld",&t);
	for(i=0; i<t; i++)
	{
		scanf("%s",a);
		l=strlen(a);
		n=l/2;
		for(j=1; j<l-1; j++)
		{
			a[l-1]=a[0];
			A=a[j];
			B=a[l-j-1];
			if(A>B)
			{	a[l-j-1]=a[j];
				c++;
			}
			else if(B>A)
			{	a[j]+=1;
				a[l-j-1]=a[j];
				c++;
			}
			if(c==0 && j==n)
				a[n]+=1;
		}
		printf("%s",a);
	}
	return 0;
}
