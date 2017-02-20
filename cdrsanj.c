#include<stdio.h>
int main()
{
	long long int x,c=0;
	scanf("%ld",&x);
	if(x%2!=0)
	{
		if(x==1)
			printf("1");
		else
			printf("0");
	}
	else
	{
		if(x==0)
			printf("0");
		else
		{
			while(x%2==0)
			{	
				c++;
				x=x/2;
			}
			printf("%ld",(2*c));
		}
	}
	return 0;
}
