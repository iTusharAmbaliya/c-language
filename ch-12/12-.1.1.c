#include<stdio.h>

struct student{
	int id,age,standard;
	char name[20] ,course[30] ,city[40] ,school[50];
	float per;
	
};
void main()
{
	int n,i;
	
	printf("enter totat students :");
	scanf("%d",&n);
	
	struct student s[n];
	
	for(i=0; i<n; i++)
	{
		printf("student : (%d/%d)\n",i+1,n);
		printf("enter id\t : ");
		scanf("%d",&s[i].id);
		printf("enter name\t : ");
		scanf("%s",&s[i].name);
		printf("enter age\t : ");
		scanf("%d",&s[i].age);
		printf("enter course\t : ");
		scanf("%s",&s[i].course);
		printf("enter city\t : ");
		scanf("%s",&s[i].city);
		printf("enter standard\t : ");
		scanf("%d",&s[i].standard);
		printf("enter school\t : ");
		scanf("%s",&s[i].school);
	}
	printf("id\tname\tage\tcourse\tcity\tstandard\tschool\\n === === === === === === === ===\n");
	for(i=0; i<n; i++){
		printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\n",s[i].id,s[i].name,s[i].age,s[i].course,s[i].city,s[i].standard,s[i].school);
	}
}
