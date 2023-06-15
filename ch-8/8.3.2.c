#include<stdio.h>
main()
{
	int r,c;
	
	printf("enter number row :");
	scanf("%d",&r);
	
	printf("enter number colam :");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	
	printf("\n enter array A's element : \n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("enter a[%d][%d] :" ,i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int b[r][c];
	
	printf("\n enter array B's element : \n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("enter b[%d][%d] :" ,i,j);
			scanf("%d",&b[i][j]);
			
		}
	}
	
	printf("\n array c IS : \n");
	for(i=0; i<r; i++)
	{	
		for(j=0; j<c; 
		j++)
		{
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}