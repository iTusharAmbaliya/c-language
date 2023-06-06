#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,i;
	clrscr();
		printf("enter any number :");
		scanf("%d",&n);


		for(i=1; i<=n; i++)
		{
			sum+=i;
		}
		printf("the sum of all number :%d",sum);


	getch();
}