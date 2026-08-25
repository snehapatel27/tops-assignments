#include<stdio.h>
main(){
	int team;
	printf("\nenter your fav team:=");
	
	printf("\n 1.mumbai indian");
	printf("\n 2.rcb");
	printf("\n 3.csk");
	
	scanf("%d",&team);
	printf("\n fav team is:=%d",team);
	
	if(team== 1){
		printf("\n Go Mumbai Indian!:=");
		}
		else if(team==2){
			printf("\n Go Rcb!:=");
		}
		else if(team==3){
			printf("\n Go csk!");
		}
	
	else{
		printf("\n Team not found!");
	}	
}
