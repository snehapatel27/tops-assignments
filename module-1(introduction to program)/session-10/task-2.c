#include<stdio.h>
#include<string.h>
main(){
	char username1[20];
    char username2[20];

 	printf("enter the username1 and username2");
 	scanf("%s %s",&username1,&username2);
    printf("%d",strcmp(username1,username2));
}
