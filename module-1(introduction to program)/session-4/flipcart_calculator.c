#include<stdio.h>
main(){
	//int price=2500;
	int price;
	int discount=10;
	int ismember=1;
	float dis_price;
	float total_price;
	float member_discount;
	
	printf("\n enter the member 1/0");
	scanf("%d",&ismember);
	
//	printf("price is %d",price);
	printf("\n enter the price:=");
	scanf("%d",&price);
	
	dis_price=price*discount/100;
	total_price=price-dis_price;
	printf("\n discount_price :=%.2f",total_price);
	
	if(ismember==1){
			member_discount=total_price*5/100;
			printf("\n it is member that discount 5%% :=%.2f",member_discount);
			
			printf("\n discount total price:=%.2f",total_price-member_discount);
		}
			
}

