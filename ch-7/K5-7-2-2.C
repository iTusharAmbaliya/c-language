#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s,space=5;
	clrscr();
	for(i=5; i>=1; i--)
	{
		for(s=1; s<=space; s++)
		{
			printf(" ");
		}
		space--;
		for(j=i; j<=5; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}

	getch();

}