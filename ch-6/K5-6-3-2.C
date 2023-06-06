#include<stdio.h>
#include<conio.h>
void main ()
{
	int i,n,fac=1;
	clrscr();

	printf("enter ant number :");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		fac =fac*i;
	}
	printf("the factrolir is :%d",fac);

	getch();
}
