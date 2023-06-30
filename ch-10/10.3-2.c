#include<stdio.h>
int sum(int);
int main()
{
	int n;
	printf("enter number :");
	scanf("%d",&n);
	
	printf("sum %d is :%d ",n,sum(n));
	return 0;
} 
int sum(int n)
{
	if(n!=1)
	{
		return n+sum(n-1);
	}
	else
	{
		return 1;
	}
	
}
