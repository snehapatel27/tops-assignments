#include<stdio.h>
main(){
	
	int like;
	int comment;
	int share;
	
	printf("enter the  number of likes:=");
	scanf("%d",&like);
	printf("enter the number f comments:=");
	scanf("%d",&comment);
	printf("enter the number of shares:=");
	scanf("%d",&share);
	printf("likes :=%d comment :=%d share :=%d",like,comment,share);
	
	if(like>=1000 || comment>200 && share>=50){
		printf("\n post is trending on Instagram ");
	}
	else{
		printf("\n not trending");
	}
	
}
