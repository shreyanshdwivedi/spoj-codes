#include <stdio.h>
#include <string.h>
int main()
{
	char s[101];
	int a[101];
	int c,ent,flag,car,i,l,r;
	while(scanf("%s",s)!=EOF)
	{
		l=strlen(s);
		car=0;
		for(i=l-1;i>=0;i--)
		{
			r=(s[i]-48)*2+car;
			a[l-i-1]=r%10;
			car=r/10;
		}
		if(car!=0)
		{	a[l]=car;
			l=l+1;
		}
/*		for(i=l-1;i>=0;i--)
		{
			printf("%d",a[i]);
		}*/
		flag=0;
		ent=0;
		if(a[0]==0)
			ent=1;
		for(i=0;i<l;i++)
		{
			if(ent)
			{
				if(i==0)
				{	a[i]=8;
					flag=1;
				}
				else a[i]=9;
				if(a[i+1]!=0)
				{	a[i+1]=a[i+1]-1;
					i++;
					break;
				}
				//flag=1;
			}
		}
		if(flag!=1)
		{	
			a[0]=a[0]-2;
		}
		i=l-1;
		c=0;
		while(a[i]==0)
		{
			c++;
			i--;
		}

		for(i=l-1-c;i>=0;i--)
		{
			printf("%d",a[i]);
		}
		printf("\n");
	}
	return 0;
}

