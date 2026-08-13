
#include<stdio.h>
main(){
	int age,total_ordervalue;
	
	printf("enter the age:=");
	scanf("%d",&age);
	printf("enter the total_ordervalue:=");
	scanf("%d",&total_ordervalue);
//	printf("\n users age is:=%d and total_ordervalue :=%d",age,total_ordervalue);
	
	if(age>=18 && total_ordervalue>500){
		printf("\n eligible");
	}
	else{
		printf("\n not eligible");
	}
}
