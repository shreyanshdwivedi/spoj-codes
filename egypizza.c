    #include <stdio.h>
    int main()
    {
    int a=0,b=0,c=0,m=0,s=0,n,i;
    float t=0;
    char x[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%s",x);
    if(x[0]=='1')
    {
    	if(x[2]=='4') a++;
    	else b++;
    }
    else c++;
    //printf("%d %d %d\n",a,b,c);
    }
    s=c;
    if(a<c)
    { 
      t=b/2.0;
      m=t;
      if(m==t)
    	s=s+m;
      else
    	s=s+m+1;
    } 
    else if(a==c)
    {
      t=b/2.0;
      if(t==(int)(b/2))
    	s=s+b/2;
      else
    	s=s+(b/2)+1;
    }
    else
    {
       t=a-c;
       t=t/2.0;
       t=t+b;
       t=t/2;
       m=t;
       if(m==t)
    	s=s+t;
       else
    	s=s+m+1;
    }
     
    printf("%d",s+1);
    return 0;
    } 
