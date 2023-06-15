#include<stdio.h>
void main()
{
	int n;
	printf("enter array size : ");
	scanf("%d",&n);
	
	int a[n],i;
	float sum=0,average=0;
	for(i=0; i<n; i++)
	{
		printf("enter array element : a[%d] = ",i);
		scanf("%d",&a[i]);
		sum +=a[i];
		average=sum/n;
	}
	
	printf("avg : %.2f",average);
}