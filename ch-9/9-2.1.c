#include<stdio.h>
#include<string.h>

main ()
{
	char pass[40];
	int i,a,special,lowercase=0,upparcase=0,digit=0;
	
	printf("creat your password : ");
	gets(pass);
	
	a =strlen(pass);
	
	for(i=0; i<40; i++)
	{
		if(pass[i]>= 'a' && pass[i]<= 'z')
		{
			++lowercase;
		}
		else if(pass[i]>='A' && pass[i]<='Z')
		{
			++upparcase;
		}
		else if(pass[i]>='0' && pass[i]<='9')
		{
			++digit;
		}
		else
		{
			++special;
		}
	}
		if(lowercase>0 && upparcase>0 && digit>0 && special>0)
		{
			printf("you are password strong : ");
		}
		else
		{
			printf("TRI AGAIN !! : ");
		}
	
}
