#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of matrix\n");
	scanf("%d",&n);
	int a[n][n],i,j,sum;
	printf("Enter the elements in %dx%d matrix\n",n,n);
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	 scanf("%d",&a[i][j]);
	 }
	 for(i=0;i<n;i++)
	  {
	  	sum=0;
	  	 for(j=0;j<n;j++)
	  	  sum=sum+a[i][j];
	  	printf("Sum of %d row = %d\n",i,sum);
	  }
	 for(j=0;j<n;j++)
	  {
	  	sum=0;
	  	 for(i=0;i<n;i++)
	  	  sum=sum+a[i][j];
	  	printf("Sum of %d column = %d\n",j,sum);
	  }
 return 0;
}
