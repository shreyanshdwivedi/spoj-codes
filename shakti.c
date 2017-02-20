#include <stdio.h>
int main()
{
	long long int t,n,i;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		if(n%2==0)
			printf("Thankyou Shaktiman\n");
		else
			printf("Sorry Shaktiman\n");
	}
	return 0;
}

