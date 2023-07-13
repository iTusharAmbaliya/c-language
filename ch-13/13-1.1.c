#include<stdio.h>
void main()
{
	FILE *crazy1,*crazy2;
	int a;
		
	crazy1 = fopen("C:\\Users\\R34\\Desktop\\crazy1.txt","r");
	fscanf(crazy1,"%d",&a);
	fclose(crazy1);
	
	crazy2 = fopen("C:\\Users\\R34\\Desktop\\crazy2.txt","w");			
	fprintf(crazy2,"%d",a);
	fclose(crazy2);

}
