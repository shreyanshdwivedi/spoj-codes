//#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
//using namespace std;
int main()
{
	long long int t,AB,AC,AD,BC,BD,CD,u1,v1,w1;
	long double vol;
	scanf("%lld",&t);
	while(t--)
	{
	scanf("%lld %lld %lld %lld %lld %lld",&AB,&AC,&AD,&BC,&BD,&CD);

	u1=(AC*AC)+(AD*AD)-(CD*CD);
	v1=(AD*AD)+(AB*AB)-(BD*BD);
	w1=(AB*AB)+(AC*AC)-(BC*BC);
	vol=-(AB*AB*u1*u1)-(AC*AC*v1*v1)-(AD*AD*w1*w1)+(u1*v1*w1);
	vol+=(4*AB*AB*AC*AC*AD*AD);
	vol=sqrt(vol);
	vol=vol/12;
	printf("%0.4llf\n",vol);
	}
	return 0;
}

