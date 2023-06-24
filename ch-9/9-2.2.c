#include<stdio.h>
#include<string.h>
main()
{
	char PASSWORD[20],EMAIL[20];
	char password[40] ="tushar@2121" ,email[40]= "tushar@gmail.com";
	 
	printf("enent email\t :");
	gets(EMAIL);
	
	printf("enter your password :");
	gets(PASSWORD);
	 
	if(strcmp(email,EMAIL)==0)
	{
		if(strcmp(password,PASSWORD)==0)
		{
	 		printf("login successfull ");
		}
		else
		{
			printf("try again");
		}
	}
	else
	{
		printf("invalid credentials ");
	}
	 
}
