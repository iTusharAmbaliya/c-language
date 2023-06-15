#include<stdio.h>
main()
{
	int r,c;
	
	printf("enter number row :");
	scanf("%d",&r);
	
	printf("enter number colam :");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("enter a[%d][%d] :" ,i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}