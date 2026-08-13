#include<stdio.h>
main(){
	int age;
	printf("enter the age:=");
	scanf("%d",&age);
//	printf("age:=%d",age);
	
	 if(age>=25){
			printf("\n Eligible for car Rental");
	}
	else if(age>=21){
			printf("\n Eligible for credit card");
	}
	else if(age>=18){
		printf("\n Eligible for licence");
	}
	
	else{
		printf("\n not Eligible for all");
	}
}
