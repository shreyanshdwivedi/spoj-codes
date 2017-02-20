#include <stdio.h>
int sort(int a[],int);
int main()
{
	int t,s,i,n,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		s=0;
		scanf("%d",&n);
		int a[n],b[n];
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[j]);
		}
		sort(a,n);
		sort(b,n);
		for(j=0;j<n;j++)
		{
			s=s+(a[j]*b[j]);
		}
		printf("%d\n",s);
	}
		
return 0;
}



int sort(int array[],int n)
 {
  int c, d, swap;
 
  //printf("Enter number of elements\n");
  //scanf("%d", &n);
 
  //printf("Enter %d integers\n", n);
 
  //for (c = 0; c < n; c++)
   // scanf("%d", &array[c]);
 
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
 
 // printf("Sorted list in ascending order:\n");
 
//  for ( c = 0 ; c < n ; c++ )
  //   printf("%d\n", array[c]);
 
  return 0;
}

