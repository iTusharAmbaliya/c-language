#include<stdio.h>
void main()
{
	int n,a[n],b[n],i;
	
	printf("enter array A's size : ");
	scanf("%d",&a);
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("enter array b's size :");
	scanf("%d",&b);
	
	
	printf("enter array B's element : \n");
	for(i=0; i<n; i++)
	{
		printf("b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	printf("array c IS : ");
	for(i=0, i<n; i++)
	{
		printf("%d,%d",a[i],b[i]);
	}
}