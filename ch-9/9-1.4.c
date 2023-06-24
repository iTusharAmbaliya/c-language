#include<stdio.h>
void main()
{
	char str1[30];
	int i;
	
	printf("enter any string : ");
	scanf("%[^\n]",&str1);
	
	for(i=0; i<30; i++)
	{
		if((str1[i]>=65 && str1[i]<=90) || (str1[i]>=97 && str1[i]<=122))
		{
			if( i==0 || str1[i-1]==' ')
			{
				if(str1[i]>=97 && str1[i]<=122) {
					str1[i] -= 32;	
				}
			}
		}
		else 
		{
			if(str1[i]>=65 && str1[i]<=90)
			{
				str1[i] +S= 32;
			}
		}
	}
	printf("string :%s ",str1);
}


