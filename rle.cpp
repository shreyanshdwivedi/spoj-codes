#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[100000];
	long int c,l,i,j;
	while(scanf("%s",s)!=EOF)
	{
		l=strlen(s);
		i=0;
		while(i<l)
		{
			c=1;
			while(s[i]==s[i+1])
			{	c++;
				i++;
			}
			if(c>3)
			{
				printf("%ld!%c",c,s[i]);
			}
			else 
			{
				for(j=0;j<c;j++)
					printf("%c",s[i]);
			}
			i++;
		}
		printf("\n");
	}
	return 0;
}

			


