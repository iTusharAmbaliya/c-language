#include<stdio.h>
void row(int*ptr)
{
	printf("enter array row :");
	scanf("%d",&ptr);
}
void coulmn(int*ptr)
{
	printf("enter array coulmn:");
	scanf("%d",&ptr);
}

void main()
{
	int r,c;
	
	input(&r);
	input(&c);
	
	int a[r][c],i,j;
	int *ptr;
	
	ptr=&a[r][c];
	printf("enter array element :");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("cube of all array element :");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d",(*ptr)*(*ptr)*(*ptr));
		}
		printf("\n");
	}
}
