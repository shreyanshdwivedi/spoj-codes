//#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
//using namespace std;
int main()
{
	long long int t,AB,AC,AD,BC,BD,CD,u1,v1,w1;
	long double vol,r,a1,a2,a3,a4,s1,s2,s3,s4;
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
	vol=vol/12.0;
//	printf("%0.4llf\n",vol);
	s1=(AB+AC+BC)/2.0;
	s2=(AB+AD+BD)/2.0;
	s3=(AD+AC+CD)/2.0;
	s4=(BC+CD+BD)/2.0;
	
	a1=sqrt(s1*(s1-AB)*(s1-AC)*(s1-BC));
	a2=sqrt(s2*(s2-AB)*(s2-AD)*(s2-BD));
	a3=sqrt(s3*(s3-AD)*(s3-AC)*(s3-CD));
	a4=sqrt(s4*(s4-BC)*(s4-CD)*(s4-BD));

	r=(3*vol)/(a1+a2+a3+a4);
	printf("%0.4llf\n",r);
	}
	return 0;
}

