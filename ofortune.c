#include <stdio.h>
int main()
{
	int m,a,n,j,i=0,t,q,s=0;
	double pr,p=0,b,k=0,in,c,ci=0,si=0;
 	scanf("%d",&m);
	scanf("%lf\n%d",&pr,&t);
	while(i<m)
	{
		k=0;
		scanf("%d",&n);

		for(j=0;j<n;j++)
		{
			p=pr;
			scanf("%d %lf %lf",&a,&b,&c);
		for(q=0; q<t;q++)
		{
			in=p*b;
		if(a==0)
		{
			s=s+(int)in;
			p=p-c;
			si=p+s;
			//printf("%lf\n",si);
		}
		else if(a==1)
		{
			
			p=p-c+((int)in);
			ci=p;
			//printf("%lf\n",ci);
		}
		}
		}
		if(ci>=si)
		printf("%d \n",(int)ci);
		else
		printf("%lf \n",(int)si);
	i++;
	}
return 0;
}
