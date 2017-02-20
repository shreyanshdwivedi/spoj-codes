#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k;
	long long int i,j;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		long long int h[n],d,min;
		for(i=0;i<n;i++)
		{
			cin>>h[i];
		}
		min=abs(h[0]-h[1]);
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				d=abs(h[i]-h[j]);
				if(d<min)
					min=d;
			}
		}
		cout<<min<<endl;
	}
	return 0;
}


