#include<stdio.h>
struct student
{
	int rollno,chem,meath, phy;
	char name[40];
	float per;
};
void main()
{
	FILE *mark;
	int i;
	 mark =fopen("C:\\Users\\R34\\Desktop\\mark.txt","w");
	 struct student a[5];
	 for(i=0; i<5; i++)
	 {
	 	printf("enter details of student %d\n",i+1);
	 	printf("enter rollno");
	 	scanf("%d",&a[i].rollno);
	 	printf("enter name");
	 	scanf("%s",&a[i].name);
	 	printf("enter chem");
	 	scanf("%d",&a[i].chem);
	 	printf("enter meath");
	 	scanf("%d",&a[i].meath);
	 	printf("enter phy");
	 	scanf("%d",&a[i].phy);
	 	a[i].per =(a[i].chem+a[i].meath+a[i].phy)/3;
	 	
	 }
	 fprintf(mark,"roll no\tname\tchem\tmeath\tper\n");
	 for(i=1; i<5; i++)
	 {
	 	fprintf(mark,"%d\t%s\t%d\t%d\t%d\t%.2f\t  \n",a[i].rollno,a[i].name,a[i].chem,a[i].phy,a[i].meath,a[i].per);
	 }
	 fclose(mark);
}
