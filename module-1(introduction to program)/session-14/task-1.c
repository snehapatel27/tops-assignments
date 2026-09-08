#include<stdio.h>
main()
{
	int prices[3]={120,250,90};
	int total=0;
	int i;
	for(i=0;i<3;i++)
	{
		total=total+prices[i];
	}
	printf("total prise :=%d",total);
}
