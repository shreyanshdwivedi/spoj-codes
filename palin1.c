#include <stdio.h>
#include <string.h>
int main()
{
	long long int t,l,n,i,j,c=0,k=0,flag=0;
	char s[1000001];
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		c=0;
		k=0;
		flag=0;
		scanf("%s",s);
		l=strlen(s);
		n=l/2;
//		s[l-1]=s[0];
		for(i=0; i<n; i++)
		{
			if(s[i]==s[l-i-1])
				k++;
		}
		if(k==n)
		{
			flag=1;
			if(l%2==0)
			{
				s[n-1]+=1;
				s[n]=s[n-1];
			}
			else
			{
				s[n]+=1;
			}
		}
		s[l-1]=s[0];
		for(j=n-1; (j>=0 && flag==0); j--)
		{
			if(s[j]<s[l-j-1] && c==0)
			   {  s[j]+=1;
			      s[l-j-1]=s[j];
				   c++;
			   }
			else if(s[j]>s[l-j-1] && c==0)
			{
				s[l-j-1]=s[j];
				c++;
			}
			else if(s[j]==s[l-j-1] && c==0)
			{
				s[j]+=1;
				s[l-j-1]=s[j];
				c++;
			}
			else if(c!=0)
			{
				s[l-j-1]=s[j];
			}
		}
/*		if(c==0 && l%2!=0)
			s[n]+=1;*/
		printf("%s \n",s);
	}
	return 0;
}
			
