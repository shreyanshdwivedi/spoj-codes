#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,s,b,c,i;
	long long int sum;
	scanf("%d %d %d",&n,&k,&s);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	b=n;
	sum=0;
	c=0;
	while(sum<(k*s) && b>=0)
	{
		sum+=a[b-1];
		b--;
		c++;
	}
	printf("%d\n",c);
	return 0;
}
