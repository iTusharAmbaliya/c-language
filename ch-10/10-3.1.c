#include<stdio.h>
int factorial (int n)
{
	if(n>0)
	{
		return n * factorial(n-1);
	}
	else
	{
		return 1;
	}
	
}
void main()
{
	int n,fac;
	printf("enter number :");
	scanf("%d",&n);
	
	fac = factorial(n);
	
	printf("factorial of %d is :%d",n,fac);
}
