#include<stdio.h>
main(){
	int price=700;
	const int gst=18;
	int gstAmount, totalAmount;
	gstAmount=price * gst /100;
	totalAmount=gstAmount+price;
	printf("\n price:%d",price);
//	printf("\n gst %d",gst);
	printf("\n gstprice %d",gstAmount);
	printf("\n totalAmount: %d",totalAmount);
}
