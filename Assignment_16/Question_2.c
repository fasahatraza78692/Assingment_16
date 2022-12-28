#include<stdio.h>
int main()
{
	int i,j,k,sum,a[3][3],b[3][3],mul[3][3];
	printf("Enter the first array elements\n");
	for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	  scanf("%d",&a[i][j]);
	 }
	printf("Enter the second array elements\n");
	for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	  scanf("%d",&b[i][j]);
	 }
	 for(i=0;i<3;i++)
	  {
	  	for(j=0;j<3;j++)
	  	 {
	  	 	sum=0;
	  	 	for(k=0;k<3;k++)
	  	 	 	sum=sum+a[i][k]*b[k][j];
			 mul[i][j]=sum;
		 }
	  }
	printf("Multiply of both matrixes\n");
	for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	 {
	 	   	printf("%3d   ",mul[i][j]);
		 }
		  printf("\n");
	 }
 return 0;
}
