#include <stdio.h>
int main()
{
	int t,a,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&a,&c);
		if(a==0)
		{
			if(c>=3)
				printf("4\n");
			else if(c>=2)
				printf("3\n");
			else if(c>=1)
				printf("2\n");
		}
		else if(a==1)
		{
			if(c>=3)
				printf("3\n");
			else if(c>=2)
				printf("2\n");
		}
		else if(a==2)
		{
			if(c>=3)
				printf("2\n");
		}
		else if(a==3)
			printf("1\n");
		else
			printf("0\n");

	}
	return 0;
}
