#include<stdio.h>
void main()
{
	int n;
	printf("enter array size : ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],i,count=0;
	
	for(i=0; i<n; i++)
	{
		printf("enter array a's element : a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("enter array b's element : b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("array c is : %d\n ",a[i]+b[i]);
	}
}
	