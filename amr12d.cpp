#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,l,i,flag;
	char s[11];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		l=strlen(s);
		flag=1;
		if((l==2 && (s[0]==s[1]))|| (l==1))
			printf("YES\n");
		else
		{
			for(i=0;i<=(l/2);i++)
			{
				if(s[i]!=s[l-i-1])
				{	flag=0;
					break;
				}
			}
			if(flag==0)
				printf("NO\n");
			else
				printf("YES\n");
		}
	}
	return 0;
}

