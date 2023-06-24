#include<stdio.h>
main()
 {
 	int r,c;
 	
 	printf("enter the array row size :");
 	scanf("%d",&r);
 	printf("enter the array coulam size :");
 	scanf("%d",&c);
 	
 	int a[r][c],i,j,max=0;
 	
 	printf("enter array elements :");
 	for(i=0; i<r; i++)
 	{
 		for(j=0; j<c; j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);		 	
		}	
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
	}
	printf("largets element is :%d",max);	
 }
