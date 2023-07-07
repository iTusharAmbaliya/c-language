#include<stdio.h>
void main()
{
	int a ,b;
	int *c,*d;
	
	printf("enter first number : ");
	scanf("%d",&a);
	
	printf("enter second number : ");
	scanf("%d",&b);
	
	c = &a ;
	
	d = &b ; 
	
	printf("BEFORE SWAPPING : %d and %d ",a,b);
	
	*c = a +b ;
	*d = a -b ;
	*c = a -b ;
	
	printf("\n AFTER SWAPING :%d and %d ",*c,*d);
}

