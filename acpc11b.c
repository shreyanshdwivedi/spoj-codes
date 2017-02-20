#include <stdio.h>
int main()
{
	int n[2],t,i,j;
	scanf("%d",&t);
	int c;
	c=2*t;
	long long int min,k,a[2][1000],d,l,b,m;
	for(i=0;i<(2*t);i++)
	{
		//printf("hi\n");
		for(m=0;m<2;m++)
		{
		//	printf("kya \n");
		scanf("%d",&n[m]);
		for(j=0;j<n[m];j++)
		{
		//	printf("hal \n");
			scanf("%lld",&a[m][j]);
		}
		}
		for(l=0;l<n[0];l++)
		{
		//	printf("hai\n");
			for(b=0;b<n[1];b++)
			{
		//		printf("btao \n");
				d=a[0][l]-a[1][b];
				if(d<0)
					d=-d;
				if(b==0)
					min=d;
				if(min>d)
					min=d;
			}
		}
		printf("%lld \n",min);
	}
/*	for(i=0;i<(2*t);i+=2)
	{
		k=min[i+1]-min[i];
		printf("%lld \n",k);
	}
*/	return 0;
}
