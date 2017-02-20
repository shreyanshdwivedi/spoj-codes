#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	char s[105];
	cin>>s;
	int carry=0;
	for(i=strlen(s)-1;i>=0;i--)
	{
		if(carry==0)
		{
			if((s[i]-48)*2>=10)
			{
				carry=1;
				s[i]=(s[i]-48)*2;
				s[i]%=10;
				s[i]+=48;
			}
			else
			{
				s[i]=(s[i]-48)*2;
				s[i]%=10;
				s[i]+=48;
				carry=0;
			}	
		}
		else if(carry!=0)
		{
			if((s[i]=(s[i]-48)*2+carry)>=10)
			{
				s[i]=(s[i]-48)*2+carry;
				carry=1;
				s[i]%=10;
				s[i]+=48;
			}
			else{
			s[i]=(s[i]-48)*2+carry;
			s[i]%=10;
			s[i]+=48;
			carry=0;
			}
		}
		cout<<carry<<endl;
	}
	cout<<s;
	return 0;
}	
