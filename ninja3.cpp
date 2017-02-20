#include <bits/stdc++.h>
using namespace std;

unsigned long long int hcf(unsigned long long int n1, unsigned long long int n2)
{
    if (n2 != 0)
       return hcf(n2, n1%n2);
    else 
       return n1;
}

int main()
{
	int t;
	unsigned long long int n,n1,n2,x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%llu %llu %llu",&n,&n1,&n2);
		x=hcf(n1,n2);
		while(x--)
			printf("%llu",n);
		printf("\n");
	}
	return 0;
}
		
