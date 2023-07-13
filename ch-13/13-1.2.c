#include<stdio.h>
void main()
{
	FILE *fp;
	int i;
	
	fp=fopen("C:\\Users\\R34\\Desktop\\tushar.txt","w");
	
	for(i=1; i<=50; i++)
	{
		if(i%15==0)
		{
			fprintf(fp,"%d\n",i);
		}
	}
	
	fclose(fp);
}
