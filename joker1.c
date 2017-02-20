#include <bits/stdc++.h>
using namespace std;
int main()
{
	int p,i,j,t,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		p=1;
		scanf("%d",&n);
		int a[n];
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		sort(a,a+n);
		for(j=0;j<n;j++)
		{
			if((a[j]-j)>0)
				p*=(a[j]-j);
			else
			{
				p=0;
				break;
			}
		}
			printf("%d \n",p);
	}
	return 0;
}
