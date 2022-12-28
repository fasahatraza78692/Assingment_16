#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of matrix\n");
	scanf("%d",&n);
	printf("Enter the elements in %dx%d matrix\n",n,n);
	int a[n][n],i,j,index,cnt=0,count=0;
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	  scanf("%d",&a[i][j]);
	 }
	 for(i=0;i<n;i++)
	  {
	  	count=0;
	  	 for(j=0;j<n;j++)
	  	  {
	  	  	if(a[i][j]==1)
	  	  	 count++;
		  }
		if(cnt<count)
		 {
		 	cnt=count;
		 	index=i;
		 }
	  }	
	printf("Maximum number of 1s in %dth row",index);
 return 0;
}
