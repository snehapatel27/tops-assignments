#include<stdio.h>
char* getUserInitials(char name[]){
	 static char Intials[3];
	 Intials[0]=name[0];
	 Intials[1]=name[6];
	 Intials[2]='\0';
	 return Intials;
}
main(){
	char name[]="virat kohli";
	printf("Initials=%s",getUserInitials(name));
}
