#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	char *ptr;
	
	printf("enter name :");
	gets(str);
	
	ptr = &str;
	
	int i,count=0;
	
	for(i=0; *ptr !=NULL; i++)
	{
		count++;
		ptr++;
	}
	printf("enter lenth of a string :%d",count);
}
