#include <bits/stdc++.h>
using namespace std;
int main()
{
	char str[51];
	int l,t,i,sum;
	int b[51];
	scanf("%d",&t);
	while(t--)
	{
	scanf("%s",str);
	l=strlen(str);
	int a[l];
	sum=0;
	for(i=l-1;i>=0;i--)
	{
		a[i]=((int)str[i]-48);
		sum+=a[i];
	}
	printf("%d\n",sum);
	}
	return 0;
}
