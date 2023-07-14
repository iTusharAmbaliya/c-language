#include<stdio.h>
void main()
{
	FILE *f1p,*f2p;
	int  i;
	
	f1p = fopen("C:\\Users\\R34\\Desktop\\carzy1.txt","w");
	
	for(i=50; i<=70; i++)
	{
		if(i%2==0)
		{
			fprintf(f1p,"%d",i);
		}
	}
	fclose(f1p);
	 
	f2p = fopen("C:\\Users\\R34\\Desktop\\crazy2.txt","w");
	
	for(i=50; i<=70; i++)
	{
		if(i%2==1)
		{
			fprintf(f2p,"%d",i);
		}
	}
	fclose(f2p);
}
