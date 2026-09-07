#include<stdio.h>
struct FoodIteam
{
	char itemname[30];
	float price;
	float rating;
};
main()
{
	struct FoodIteam f[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter the iteamname price rating\n");
		scanf("%s %f %f",f[i].itemname,&f[i].price,&f[i].rating);	
	}
	for(i=0;i<3;i++)
	{
		printf("\niteamname:=%s",f[i].itemname);
		printf("\nprice:=%.2f",f[i].price);
		printf("\nrating:=%.2f",f[i].rating);
	}
}
