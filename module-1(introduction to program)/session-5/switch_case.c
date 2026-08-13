#include<stdio.h>
main(){
	int choice;

	printf("\n press 1.breakfast");
	printf("\n press 2.lunch");
	printf("\n press 3. dinner");
	printf("\n press 4. snack");
	printf("\n enter your choice:=");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\n aloopuri popular dish for that time");
			break;

		case 2:
			printf("\n  jira-rice popular dish for that time");
			break;
		
		case 3:
			printf("\n  dosa popular dish for that time");
			break;
		
		case 4:
			printf("\n  sandwich popular dish for that time");
			break;
			
		default:
			printf("\n Try some fruits!");
		
	}
}
