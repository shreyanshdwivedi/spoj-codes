#include <bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int p,i,j,t,n,b;
	b=1000000007;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		p=1;
		scanf("%llu",&n);
		unsigned long long int a[n];
		for(j=0;j<n;j++)
		{
			scanf("%llu",&a[j]);
		}
		sort(a,a+n);
		for(j=0;j<n;j++)
		{
			if((a[j]-j)>0)
			{
				p*=(a[j]-j);
				p=p%1000000007;
			}
			else
			{
				p=0;
				break;
			}
		}
			p=p%b;
			printf("%llu \n",p);
	}
	printf("KILL BATMAN");
	return 0;
}
