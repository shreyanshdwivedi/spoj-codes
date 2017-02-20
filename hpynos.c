#include <stdio.h>
int main()
{
	unsigned long long int flag=0,x,n,c=0,s=0,i=0,j,r,a[1000];
	scanf("%llu",&n);
	x=n;

	while(1)
	{
	s=0;
	while(x!=0)
	{
		r=x%10;
		s=s+(r*r);
		x=x/10;
	}
	if(c!=0)
	{for(j=0;j<c;j++)
	{
		if(a[j]==s)
		{flag=1;
		 break;
		}
	}}
	if(flag==1) break;
	a[c]=s;
	x=s;
	c++;
	if(s==1)
	{printf("%llu",c);
	break;}
	
	}
	if(flag==1) printf("-1");
	return 0;
}
