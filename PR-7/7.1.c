#include<stdio.h>

int sum (int a, int b)
{
	return a+b;
}
int sub (int a, int b)
{
	return a-b;
}
int div (int a, int b)
{
	return a/b;
}
int mul(int a, int b)
{
	return a*b;
}
int mod(int a, int b)
{
	return a%b;
}
int first()
{
	int a;
	printf("enter first number :");
	scanf("%d",&a);
	
	return a;
}
int second()
{
	int b;
	printf("enter second number :");
	scanf("%d",&b);
	
	return b;
}

void main()
{
	int choice,a,b;
	do
	{
		printf("\n\npress \n 1 for + \n 2 for - \n 3 for * \n 4 for / \n 5 for % \n 6 for exit\n enter the choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				a=first();
				b=second();
				sum(a,b);
				printf("sum :%d",sum(a,b));
				break;
				
			case 2:
				a=first();
				b=second();
				sub(a,b);
				printf("sub :%d",sub(a,b));
				break;
				
			case 3:
				a=first();
				b=second();
				div(a,b);
				printf("div :%d",div(a,b));
				break;
				
			case 4:
				a=first();
				b=second();
				mul(a,b);
				printf("mal :%d",mul(a,b));
				break;
				
			case 5:
				a=first();
				b=second();
				mod(a,b);
				printf("mod :%d",mod(a,b));
				break;
				
			case 6:
			
				break;
				
			default:
				
				printf("\n");
				main();						
		}
		
		
	}while(choice !=6);
}

