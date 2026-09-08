#include<stdio.h>
#include<ctype.h>
void addToCart(char cart[][30],int*count,char product[])
{
	int i;
	strcpy(cart[*count],product);
	(*count)++;
	printf("upadte cart:\n");
	for(i=0;i<*count;i++)
	{
		printf("%s \n",cart[i]);
	}
}
main()
{
	char cart[10][30];
	int count=0;
	int i;
	addToCart(cart,&count,"burger");
	addToCart(cart,&count,"pizza");
	printf("\n cart outside function:\n");
	for(i=0;i<count;i++)
	{
		printf("%s \n",cart[i]);
	}
}
