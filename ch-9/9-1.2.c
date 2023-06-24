#include<stdio.h>
void main()
{
	char str1[30];
	int i;
	
	printf("enter any string : ");
	scanf("%[^\n]",&str1);
	
	for(i=0; i<30; i++)
	{
		if(str1[i]>=65 && str1[i]<=90)
		{
			str1[i] = str1[i] + 32 ;
		}
	}
	printf("lowercase steing :%s ",str1);
}


