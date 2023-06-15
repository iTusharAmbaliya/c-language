#include<stdio.h>
main()
{
	int n;
	printf("enter array size : ");
	scanf("%d",&n);
	
	int a[n],i,count=0;
	for(i=0; i<5; i++)
	{
		printf("enter array element : ");
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	
	{
		count++;
	}
	printf("length of an array : %d",count);
}