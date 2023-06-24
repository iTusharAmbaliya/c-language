#include<stdio.h>
#include<string.h>
main()
{
	int i,j,count=0;
	char str[40];
	
	printf("enter any string :");
	gets(str);
	
	for(i=0; str !=NULL; j++)
	{
		for(j=0; str !=NULL; j++)
		{
			if(str[i]==str[j])
			{
				count++;
			}	
		}		
	}
	printf("frequency of %c : %d \n",str[i],count);
	count=0; 
}
