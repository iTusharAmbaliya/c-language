#include<stdio.h>
main()
{
	int r,c;
	
	printf("enter the array row size :");
	scanf("%d",&r);
	printf("enter the array coulums :");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	
	printf("enter array elements :\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter teamsope matrix of on array :\n");
	for(j=0; j<c; j++)
	{
		for(i=0; i<r; i++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
