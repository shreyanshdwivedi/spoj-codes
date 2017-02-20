#include <stdio.h>
int main()
{
	int i,j,n,k;
	scanf("%d %d",&n,&k);
	char s[n];
	scanf("%s",s);
	while(k--)
	{
		for(i=0;i<n;i++)
		{
			j=i+1;
			if(i==(n-1))
				j=0;

				if((s[i]=='G' && s[j]=='R')||(s[i]=='R' && s[j]=='G'))
				{	s[i]='W';
					s[j]='W';
				}
				else if((s[i]=='G' && s[j]=='W')||(s[i]=='W' && s[j]=='G'))
				{
					s[i]='R';
					s[j]='R';
				}
				else
				{
					s[i]='G';
					s[j]='G';
				}
			
		}
	}
	printf("%s",s);
}
