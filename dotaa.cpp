#include <bits/stdc++.h>
using namespace std;
int main()
{
	int c,flag,i,t,n,m,d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&n,&m,&d);
		int h[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&h[i]);

		}
		sort(h,h+n);
		c=0;
		for(i=0;i<n;i++)
		{
			while(h[i]/d!=0)
			{
				h[i]/=d;
				c++;
				if(c>=m)
				{
					flag=1;
					printf("YES\n");
					break;
				}
			}
			if(flag==1)
				break;
		}
		if(flag==0)
			printf("NO\n");
//		return 0;
		getchar();
	}
	return 0;
}
