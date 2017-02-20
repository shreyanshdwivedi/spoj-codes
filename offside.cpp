#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,i,j,min,min1,min2,m,n,c;
	while(1)
	{
	min=0;
	scanf("%d %d",&a,&b);
	if(a==0 && b==0)
		break;
	for(i=0;i<a;i++)
	{
		scanf("%d",&n);
		if(n<min)
			min=n;
	}
/*	for(i=0;i<b;i++)
	{
		scanf("%d",&m);
		if(i==0)
			min1=m;
		else if(i==1)
		{	
			min2=m;
			break;
		}
	}*/
	scanf("%d",&m);
	min1=m;
	min2=m;
	c=0;
	for(j=1;j<b;j++)
	{
		scanf("%d",&m);
		if(min2==m)
		{	
			if(j==1)
				c+=2;
			else
				c++;
		}
			
		if(min1>m)
		{
			if(min2>=min1)
			{	min2=min1;
				c=0;}
			min1=m;
		}
		else if(min2>m)
		{	min2=m;
			c=0;}
	}
	if(min<=min2 && c<=1)
		printf("Y\n");
	else
		printf("N\n");
	}
	return 0;
}

