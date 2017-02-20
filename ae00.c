#include <stdio.h>
int main()
{
	int n,sum;
	scanf("%d",&n);
	int k,i=2,a=0,c;
	while(1)
	{
		c=i;
		k=n/i;
		if(k>=i)
		{
			while(c*i<=n)
			{
				a++;
				c++;
			}
		}
		else
			break;
	//	printf("%d",(n+a));
		i++;
	}
	printf("%d",(n+a));
	return 0;
}
	
