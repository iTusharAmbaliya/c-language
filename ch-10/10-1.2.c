#include<stdio.h>
void cube()
{
	int a;
	
	printf("enter any number :");
	scanf("%d",&a);
	
	
	if(a%3==0 && a%5==0)
	{
		printf("the given number is divisible  by both 3 & 5.");
		
	}
	else
	{
		printf("the given number is not divisibel by both 3 & 5.");
	} 
}
void main()
{
	cube();
}
