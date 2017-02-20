#include <bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int i,num,t,n;
	scanf("%llu",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%llu",&n);
		num=sqrt(n+1)-1;
		printf("Case %llu: %llu\n",i,num);
	}
	return 0;
}


