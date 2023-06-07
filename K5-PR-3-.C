#include<stdio.h>
#include<conio.h>
void main()
{
	int n,last_digit,first_digit,sum=0;
	clrscr();

	printf("enter any number :");
	scanf("%d",&n);

	last_digit =n%10;

	while(n>9)
	{
		n=n/10;
	}
	first_digit = n;

	sum = first_digit+last_digit;

	printf("the sum of the first and last digit : %d",sum);

	getch();
}