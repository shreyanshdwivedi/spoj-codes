#include <stdio.h>
int main()
{
	unsigned long long int i,x,y,t;
	scanf("%llu",&t);
	for(i=0;i<t;i++)
	{
		scanf("%llu %llu",&x,&y);
		if(y==0)
			printf("Airborne wins.\n");
		else if(y==1)
			printf("Pagfloyd wins.\n");
	}
	return 0;
}
