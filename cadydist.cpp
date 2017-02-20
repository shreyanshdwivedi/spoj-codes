#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,sum,i;
	while(1)
	{
		sum=0;
		scanf("%lld",&n);
		if(n==0)
			break;
		long long int c[n],p[n];
		for(i=0;i<n;i++)
			scanf("%lld",&c[i]);
		for(i=0;i<n;i++)
			scanf("%lld",&p[i]);
		sort(c,c+n);
		sort(p,p+n);
		for(i=0;i<n;i++)
		{
			sum+=(c[i]*p[n-i-1]);
		}
		printf("%lld\n",sum);
	}
	return 0;
}
