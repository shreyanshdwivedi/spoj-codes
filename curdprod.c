#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	long long int s,c,k,i,j,T,q;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %lld",&n,&T);
		long long int a[n];
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a[j]);
		}
		sort(a,a+n);
		k=1;
		s=0;
		c=0;
		while(s<T)
		{
			for(j=0;j<n;j++)
			{
				s=s+((k*a[0])/a[j]);
				c+=a[0];
			}
			k++;
		}
		printf("%lld\n\n",c);
	}
	return 0;
}

