#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		long long int flag,a[n],b[n],min,i;
		min=INT_MAX;
		flag=0;
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		for(i=0;i<n;i++)
			scanf("%lld",&b[i]);
		min=a[0];
		for(i=0;i<n;i++)
		{
			if(a[i]>=min)
			{
				
			}
		}
		if(flag==0)
		{
			for(i=0;i<n;i++)
			{
				if(b[i]>min)
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

