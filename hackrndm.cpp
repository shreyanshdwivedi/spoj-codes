#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n,k,i,j,c;
	c=0;
	scanf("%ld %ld",&n,&k);
	long int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[i]-a[j]==k)||((a[j]-a[i])==k))
			{	c++;
				break;
			}
		}
	}
	printf("%ld",c);
	return 0;
}



