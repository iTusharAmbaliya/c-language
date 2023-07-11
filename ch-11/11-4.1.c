#include<stdio.h>
int n;
int getint();
void arrayinput(int a[]);
void arraydisplay(int a[];)
void arrayCRUD(int a[]);
void arrayinsert(int a[]);
void arrayupdate(int a[]);
void arraydelete( int a[]);

void main()
{	
	printf("enter lenth of array : ");
	n= getint();
	
	int a[n];
	
	arrayintput(a);
	arraydisplay(a);
	
	arrayCRUD(a);
}

int getint(){
	int x;
	scanf("%d",&x);
	return x;
}
void arrayinput(int a[]){
	int i;
	for(i=0; i<n; i++){
		printf("enter %d element : ",i);
		scanf("%d",&a[i]);
	}
	
	
}
void arraydisplay(int a[]){
	int=i;
	for(i=0; i<n; i++){
		printf(" %d) element : %d\n,i,i+1,a[i]");
	}
	
}
void arrayCRUD(int a[]){
	int choice;
	
	do{
		printf("enter... \n1) insert \n2) update \n3) delete \n4) display \n5) exit \n enetr you choice :");
		choice = gitint();
		switch(choice){
			case 1:
				arrayinsert(a);
				break;
				
			case 2:
				arrayupdate(a);
				break;		
			
			case 3:
				arraydelete(a);
				break;
				
			case 4:
			  
			  	arraydisplay(a);
				break;
				  
			case 5:
			
			 	break;
				 
			default :
			
				printf("INVALID CHOICE !! \n\n");	 	  	
		}
		
	}while(choice != 5);
	
}
void arrayinsert(int a[]){
	
	int pos,val,i;
	
	printf("enter position between 0...%d :=",n-1);
	pos=getint();
	printf("enter value :");
	val=getint();
	
	for(i=n; i>=pos; i--)
	{
		a[i]= a[i-1];
	}
	a[pos]= val;
	n++
}
void arrayupdate(int a[]){
	int pos,val;
	
	printf("enter position between 0...%d :=",n-1);
	pos=getint();
	printf("enter value :");
	val=getint();
	
	a[pos]= val;
}
void arraydelete(int a[]){
	int pos,i;
	
	printf("enter position between 0...%d :=",n-1);
	pos=getint();
	printf("enter value :");
	val=getint();
	
	for(i=pos; i<n; i++)
	{
		a[i]= a[i+1];
	}
	n--;

}
