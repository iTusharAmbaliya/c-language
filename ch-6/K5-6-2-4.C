#include<stdio.h>
#include<conio.h>
void main()
{
	int n1=0,n2=1,n,i,n3;
	clrscr();
		printf("enter any number :");
		scanf("%d",&n);

		for(i=1;i<=n;i++)
		{
			n3=n1+n2;
			printf("%d ",n3);
			n1=n2;
			n2=n3;
		}

	getch();
}