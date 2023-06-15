#include<stdio.h>
main()
{
	int r,c;
	
	printf("enter number row :");
	scanf("%d",&r);
	
	printf("enter number colam :");
	scanf("%d",&c);
	
	int a[r][c],i,j,count=0;
	float sum=0,avg=0;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("enter a[%d][%d] :" ,i,j);
			scanf("%d",&a[i][j]);
			
			sum=sum + a[i][j];
			count++;
		}
	}
	
	avg= sum /count;
	
	printf("averege of an array :%.2f",avg);
	
}