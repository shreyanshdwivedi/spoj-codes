#include <stdio.h>
#include <limits.h>
int main()
{
	int a,b,t,n,m,max1,max2;
	scanf("%d",&t);
	while(t--)
	{
		max1=INT_MIN;
		max2=INT_MIN;
		scanf("%d %d",&n,&m);
		while(n--)
		{
			scanf("%d",&a);
			if(a>max1)
				max1=a;
		}
	//	printf("%d\n",max1);
		while(m--)
		{
			scanf("%d",&b);
			if(b>max2)
				max2=b;
		}
	//	printf("%d\n",max2);
		if(max1>=max2)
			printf("Godzilla\n");
		else
			printf("MechaGodzilla\n");
	}
	return 0;
}


