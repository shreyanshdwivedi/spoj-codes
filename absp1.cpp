#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,i;
	double d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		long long int a[n],s;
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		d=n/2.0;
		s=0;
		for(i=0;i<d;i++)
			s+=(abs(a[n-i-1]-a[i]) * (n-i-1));
		
		printf("%lld\n",s);
	}
	return 0;
}

