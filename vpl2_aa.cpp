#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,p0,p1,t1,p,a,b;
	double t2;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d %d %d",&p0,&p1,&t1,&p);
		t2=(log10((double)p/p0)/log10((double)p1/p0))*t1;
		//printf("%f %f\n",a,b);
		printf("Scenario #%d: %0.2lf\n",i+1,t2);
	}
	return 0;
}
