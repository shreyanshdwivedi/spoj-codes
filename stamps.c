#include <stdio.h>
int sort(int array[],int);
int main()
{
	long long int t,n,f,s=0;
	int c,i,j,flag=0;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		c=0;
		s=0;
		flag=0;
		scanf("%lld %lld",&n,&f);
		int a[f];
		for(j=0;j<f;j++)
		{
			scanf("%d",&a[j]);
		}
		sort(a,f);
		for(j=f-1;j>=0;j--)
		{
			s=s+a[j];
			c++;
			if(s>=n) 
			{
			  flag=1;
			  break;
			}
		}
		printf("Scenario #%d:\n",i+1);	
		if(flag==1)
		{
			printf("%d\n",c);
			printf("\n");
		}
		else if(flag==0)
		{
			printf("impossible\n");
			printf("\n");
		}
	}
return 0;
}

int sort(int array[],int n)
 {
  int c, d, swap;
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 return 0;
}

