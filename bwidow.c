#include <stdio.h>
int main()
{
	int i,j,j1,j2,t,n,jt;
	long int r1,r2,m1,m2,temp;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		m2=0;
		j2=0;
		jt=0;
		for(j=0;j<n;j++)
		{
		scanf("%ld %ld",&r1,&r2);
		if(m1<r1)
		{
			m1=r1;
			j1=j;
		}
		if(m2<=r2)
		{
			temp=m2;
			m2=r2;
			jt=j2;
			j2=j;
		}
		}
		if(m1>m2 && j1!=j2)
		{
			printf("%d \n",j1+1);
		}
		else if(j1==j2)
		{
			if(m1>temp)
				printf("%d \n",jt+1);
		}
		else
		{
			printf("-1\n");
		}
	}
	return 0;
}
		
