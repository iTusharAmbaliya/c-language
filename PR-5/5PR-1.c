#include<stdio.h>
main()
{
	int n;
	
	printf("enter the array's size :");
	scanf("%d",&n);
	
	int i,a[n];
	printf("enter array's elements :");
	
	for(i=0; i<n; i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
		
	}
	printf(" negetive element form a array :");
	
	for(i=0; i<n; i++)
	{
		if(a[i]<0)
		{
			printf("%d",a[i]);
		}
	}
}
