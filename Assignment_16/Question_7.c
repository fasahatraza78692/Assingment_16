#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of matrix\n");
	scanf("%d",&n);
	int a[n][n],i,j;
	printf("Enter the elements in %dx%d matrix\n",n,n);
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	 scanf("%d",&a[i][j]);
	 }
	printf("Lower triangular matrix\n");
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	 {
	 	   if(j<i+1)
	 	     printf("%d ",a[i][j]);
	 	  else 
	 	     printf("0 ");
		 }
	  printf("\n");
	 }
	return 0;
}
