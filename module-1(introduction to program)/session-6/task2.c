#include<stdio.h>
main(){
	int choice;
	char team[30];
		while(1){
	
		printf("\n press 1. View Teams");
		printf("\n press 2. Add Teams");
		printf("\n press 3. Exit");
		
		printf("\n enter the choice:");
		scanf("%d",&choice);
	
		switch(choice)
		{
			case 1:
					printf("\n Csk");
					printf("\n Rcb");
					printf("\n Gt");
					break;
			case 2:
				printf("\n add team");
				scanf("%s",team);
				break;
			case 3:
				 printf("\nExit...");
				return 0;
		}
	}
}
