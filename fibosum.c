#include <stdio.h>
int main()
{
	int t;
	unsigned long long int s,a,b,c,sum=0,n,m,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%llu %llu",&n,&m);
	//	long long int a[m];
		a=0;
		b=1;
		sum=0;
		for(j=2;j<=m;j++)
		{
			c=a+b;
			a=b;
			b=c;
			if((n==1||n==0) && j==2)
				sum+=1;
			if(j>=n)
				sum=sum+(c%1000000007);
		}
	//	sum=sum%1000000007;
		printf("%llu \n",sum);
	}
	return 0;
}



