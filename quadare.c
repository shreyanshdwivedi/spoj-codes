#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	double b,h,a[4];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lf %lf %lf %lf",&a[0],&a[1],&a[2],&a[3]);
		sort(a,a+4);
		b=acos(((a[3]-a[0])/a[1]));
		h=a[1]*sin(b);
		printf("%lf",b);
	}
	return 0;
}
		
