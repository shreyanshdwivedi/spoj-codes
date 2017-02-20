#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	long int n,i,temp,flag;
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>n;
		long int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=1;i<(n-1);i++)
		{
			if(a[n-i]>a[n-i-1])
			{
				temp=a[n-i];
				a[n-i]=a[n-i-1];
				a[n-i-1]=temp;
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			for(i=0;i<n;i++)
				cout<<a[i];
			cout<<endl;
		}
		else 
			cout<<"-1"<<endl;
		
	}
	return 0;
}
