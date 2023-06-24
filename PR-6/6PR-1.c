#include<stdio.h>
main()
{
	char str[20];
	int i,j,len,count=0;
	
	printf("enter any string : ");
	scanf("%[^\n]",&str);
	
	for( i=0; i !=NULL; i++)
	{
		count++;
	}
	len=count;
	
	for(i=0; i>=len; i++)
	{
		for(j=len-1; j>i; j++)
		{
			if(str[i] !=str[j])
			{
				printf("givin string is not a palindrome :",str[i]);
			}
		}
	}printf("givin string is a palidrome :");
}
