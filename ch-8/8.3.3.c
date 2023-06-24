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
			if(i==0 || j==0 || i==r-1 || j==c-1)
			{
				printf("%d",a[i][j]);
			}
			else
			{
				printf(" ");
			}
			
			
		}
		printf("\n");
	}
}