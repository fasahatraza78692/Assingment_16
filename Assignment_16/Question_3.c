#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of matrix\n");
	scanf("%d",&n);
	int a[n][n],b[n][n],i,j;
	printf("Enter the elements in %dx%d matrix\n",n,n);
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	 scanf("%d",&a[i][j]);
	 }
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	 b[j][i]=a[i][j];
	 }
	printf("Transpose matrix\n");
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	 printf("%d ",b[i][j]);
	  printf("\n");
	 }
	return 0;
}
