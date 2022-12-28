#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of matrix\n");
	scanf("%d",&n);
	int a[n][n],i,j,sum=0;
	printf("Enter the elements in %dx%d matrix\n",n,n);
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	 scanf("%d",&a[i][j]);
	 }
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	 {
	 	 	if((i==i)&&(j==n-i-1))
	 	 	 sum=sum+a[i][j];
		 }
	 }
	printf("Sum of right diagonals of the matrix = %d\n",sum);
	return 0;
}
