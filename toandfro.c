#include <stdio.h>
#include <string.h>
int main()
{
	char s[200];
	char a[200][200];
	int n,x,y,i,r,k,l,j;
	n=-1;
	while(n!=0)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		scanf("%s",s);
		l=strlen(s);
		r=l/n;
		y=n;
		k=0;
		for(i=0;i<r;i++)
		{
			y=n-1;
			//for(j=0;j<=n;j++)
			
				if(i%2==0)
				{
					for(j=0;j<n;j++)
					{
						a[i][j]=s[k];
						k++;
					}
				}
				else
				{
					for(j=n-1;j>=0;j--)
					{
						a[i][j]=s[k];
						//y--;
						k++;
					}
				}
				//	k++;
			
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<r;j++)
			{
				printf("%c",a[j][i]);
			}
		}
		printf("\n");
	}
	return 0;
}
