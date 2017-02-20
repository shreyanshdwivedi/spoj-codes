#include <stdio.h>
#include <string.h>
int main()
{
	char s[101];
	int j,d,l,car,r,ch,i,flag;
	while(scanf("%s",s)!=EOF)
	{
	
		l=strlen(s);
		int a[l+1];
		d=(int)s[l-1]-48;
//		printf("%d",d);
		if(d!=0)	
		{	flag=l-1;
			s[l-1]-=1;
//			printf("%d",(int)s[l-1]);
			car=0;
			for(i=l-1;i>=0;i--)
			{
				r=(((int)s[i]-48)*2)+car;
				a[l-i-1]=r%10;
				car=r/10;
			}
			if(car!=0)
			{	a[l]=car;
				flag=l;
			}
		
		//printf("%s",s);
			for(i=flag;i>=0;i--)
			{
				printf("%d",a[i]);
			}
			printf("\n");
		}
		else
		{
			if(s[i]=='0')
				j=i;
			while(j>=0&&s[j]=='0')
				s[j--]='9';
			s[j]=s[j]-1;
 		
		
		for(j=l-1;j>=0;j--)
		{
			a[j]=(int)s[j]-48;
			printf("%d",a[i]);
		}
		printf("\n");	
}
			
	}
	return 0;
}


