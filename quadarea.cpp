#include <bits/stdc++.h>
#include <math.h>
using namespace std;
//int main()
int main()
{
	int t,i;
	double s,area,b,h,a[4];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lf %lf %lf %lf",&a[0],&a[1],&a[2],&a[3]);
		sort(a,a+4);
		if(a[0]==a[1] && a[2]==a[3])
		{
			area=a[0]*a[2];
		}
		else
		{
			s=(a[0]+a[1]+a[2]+a[3])/2;
			area=sqrt(((s-a[3])*(s-a[0])*(s-a[1])*(s-a[2])));
		}
			printf("%0.2lf\n",area);
	}
	return 0;
}
		
