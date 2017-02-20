#include <stdio.h>
#include <math.h>
int main()
{
 unsigned long long int n;
 scanf("%llu",&n);
 double a=log2(n);
 double z=a;
 int b=(int)a;
 if((z-b)==0)
	 printf("TAK");
 else
	 printf("NIE");
 return 0;
}
