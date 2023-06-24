#include<stdio.h>
main()
{
	int r,c;
	
	printf("enter the array row size :");
	scanf("%d",&r);
	printf("enter the array colums size :");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum1=0,sum2=0,row,column;
	
	printf("enter the array element :\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	} 
	
	printf("\nenter row number :");
	scanf("%d",&row);
	
	printf("element of row  :");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(i==row)
			{
				printf("%d",a[i][j]);
				sum1 =sum1+ a[i][j];
			}
		}
	}
	printf("\nthe sum of the row %d : %d\n",row,sum1);
	
	
	printf("\nenter column number :");
	scanf("%d",&column);
	printf("element of column  :");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(j==column)
			{
				printf("%d",a[i][j]);
				sum2 =sum2+ a[i][j];
			}
		}
	}
	printf("\nthe sum of the column %d : %d\n",column,sum2);
}
