#include<stdio.h>
main()
{
	int r,c;
	
	printf("enter the array row size :");
	scanf("%d",&r);
	printf("enter the array colums size :");
	scanf("%",&c);
	
	int a[r][c],i,j,sum=0,a[i][j];
	
	printf("enter the array element :");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	} 
	
	printf("enter row number :");
	scanf("%d",&i);
	printf("element of row %d :",i);
	scanf("%d",&a[i][j]);
	
	for(i=0; i<r; i++)
	{
		sum = sum+a[i]; 
	}
	printf("the sum of the row %d ".i,sum);
	
	printf("enter coulam number :",);
	scanf("%d",&j);
	printf("element of coulam %d ",j);
	scanf("%d",&a[j]);
	
	for(j=0; j<c; j++)
	{
		sum=sum+a[j];
	}
	printf("the sum of the coulam %d :",j,sum);
}
