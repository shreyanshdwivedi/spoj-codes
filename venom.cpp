#include <bits/stdc++.h>
using namespace std;
int main()
{
	int c,i,tot,t,h,p,a;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&h,&p,&a);
		tot=h;
		c=0;
		i=1;
		while(1)
		{
			c++;
			tot+=(-p*i);
			if(tot<=0)
				break;
			c++;
			tot+=a;
			i++;
		}
		printf("%d\n",c);
	}
	return 0;
}
