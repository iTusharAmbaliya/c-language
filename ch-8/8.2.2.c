#include<stdio.h>
void main()
{
	int n,j;
	
	printf("enter the first number\t : ");
	scanf("%d",&n);
	
	int i;
	
	printf("\n");
	
	printf(" enetr the second number : ");
	scanf("%d",&j);
	
	printf("the array IS :");
	for(i=n; i<=j; i++)
	{
		if(i%4==0)
		{
			printf("%d,",i);
		}
	}
}