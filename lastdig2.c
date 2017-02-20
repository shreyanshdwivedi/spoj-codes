#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{long long int w,z,b,s,t,i,l,r,q,h;
char a[1001];
scanf("%d",&t);
while(t--)
{scanf("%s %llu",a,&b);
l=strlen(a);
r=a[l-1]-48;
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
printf("%lld\n",h);}
return 0;}
