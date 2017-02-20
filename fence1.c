#include <stdio.h>
int main()
{
	int l;
	float r,a;
	while(1)
	{
		scanf("%d",&l);
		if(l==0) break;
		//r=l/3.14159;
		a=(l*l)/(2*3.14159);
		printf("%.2f\n",a);
	}
	return 0;
}

