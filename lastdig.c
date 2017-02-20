#include <stdio.h>
#include <math.h>
int main()
{unsigned long long int b;
int z,w,s,t,a,i,r,q,h;
scanf("%d",&t);
for(i=0;i<t;i++)
{scanf("%d %llu",&a,&b);
r=a%10;
q=b%4;
if(r==2||r==7||r==8)
{if(q==1)h=r;
else if(q==2)h=(r*r)%10;
else if(q==3)h=(r*r*r)%10;
else if(q==0)h=((int)pow(r,4))%10;}
else if(r==3)
{s=b/2;
if(s%2==1)h=9;
else if(s%2==0)h=1;
w=b%2;
z=(int)pow(3,w);
h=(h*z)%10;}
else if(r==1||r==0||r==5||r==6)h=r;
else if(r==9)
{if(b%2==1)h=9;
else if(b%2==0)h=1;}
else if(r==4)
{if(b==1||b==2||b==3||b==4)h=((int)pow(r,b))%10;
else
{if(b%2==1)h=2;
else if(b%2==0)h=8;}}
if(b==0&&a!=0)h=1;
else if(a==0)
{h=0;
if(b==0)h=1;}
printf("%d\n",h);}
return 0;}
