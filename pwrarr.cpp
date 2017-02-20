#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	long int i,j,c,sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		c=0;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
					c++;
			}
		}
		sum=(((n+1)*n)/2)+c;
		printf("%ld\n",sum);
	}
	return 0;
}

