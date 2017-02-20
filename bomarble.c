#include <stdio.h>
int main()
{
	int n,k;
	long long int s;
	while(1)
	{
		s=0;
		scanf("%d",&n);
		if(n==0)
			break;
		k=n;
//		while(k!=1)
			
			s=5*n*(n+1);
		//	k--;
		
		s=(s/2)+1-(n*n);
		printf("%lld\n",s);
	}
	return 0;
}

