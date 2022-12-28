#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of matrix\n");
	scanf("%d",&n);
	printf("Enter the elements in %dx%d matrix\n",n,n);
	int a[n][n],i,j,zero=0,nonzero=0;
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	  scanf("%d",&a[i][j]);
	 }
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	 {
	 	 	if(a[i][j]==0)
	 	 	 zero++;
	 	 	else
	 	 	 nonzero++;
		 }
     }
     if(zero>nonzero)
       printf("Matrix is sparse\n");
     else
       printf("Matrix is not sparse\n");
	return 0;
}
