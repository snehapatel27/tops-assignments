#include<stdio.h>
main(){
	int price,discount_price;
	printf("enter the price:=");
	scanf("%d",&price);
//	printf("price is:=%d",num);
	if(price>=2000){
		discount_price=price*20/100;
		printf("discount price is:=%d",price-discount_price);
	}
	else if(price>=1000){
			discount_price=price*10/100;
		printf("discount price is:=%d",price-discount_price);
	}
	else{
		printf("no discount");
	}
}
