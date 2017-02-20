#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		long long int a[n],p;
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a[j]);
		}
		sort(a,a+n);
		scanf("%lld",&p);
		for(j=0;j<n;j++)
		{
			for(k=j;k<n;k++)
			{
				


