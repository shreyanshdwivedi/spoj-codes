#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&a[n-1][0],&m[n-1]);
		i=1;
		while(m--)
		{
			scanf("%d",&a[n-1][i]);
			i++;
		}
		sort(a[n-1],a[n-1]+m);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m[i];j++)
		{
			while(a[i][j]<=
		
