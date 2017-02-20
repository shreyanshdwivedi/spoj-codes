#include <stdio.h>
int main()
{
  int n=0,s=0,i,j,r,c=0;
 // int a[10001];
  while(n!=-1)
  {
	  s=0;
	  c=0;
	  scanf("%d",&n);
	  int a[n];
	  if(n==-1) break;
	  for(i=0; i<n;i++)
	  {
		  scanf("%d",&a[i]);
		  s=s+a[i];
	  }
	  if(s%n==0)
	  {
		  r=s/n;
		  for(i=0; i<n; i++)
		  {
			  if(a[i]<r)
			  { 
		  		c=c+(r-a[i]);
			  }
		  }
		  printf("%d \n",c);
	  }
	  else
		  printf("-1\n");
  }
  return 0;
}


