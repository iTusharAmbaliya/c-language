#include<stdio.h>

int arraylenth(char a[],int n)
{
	int i,len=0;
	for(i=0; a[i] !=NULL; i++)
	{
		len++;
	}
	return len;
}

void main()
{
	int len=0;
	char a[20];
	
	printf("enter string :");
	gets(a);
	
	len= arraylenth(a,20);
	printf(" lenth of string is : %d",len);
	
}

