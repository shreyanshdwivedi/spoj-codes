#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
long long int T,x,y,z,u;
long double t;
cin>>T;
while(T--)
{
    cin>>x;
    cin>>y;
    cin>>z;
    cout<<"\n";
    t=(z*(x+(double)sqrt(x*x+y*y+2*y*z)))/((double)(y+2*z));
    u=llrintl(t);
    if(u==t)
    {
        cout<<u;
    }
    else
    {
        cout<<"Not this time.";
    }
}
return 0;
}
