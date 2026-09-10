#include<stdio.h>
void formatFollowersCount(int count)
{
	if(count>1000)
	{
		if(count>1000000)
		{
			printf("%.1fM", count / 1000000.0);
		}
		else
		{
			printf("%.1fk", count / 1000.0);
		}
	}
	else
	{
		printf("%d",count);
	}
}
main()
{
	int count1=1700;
	int count2=1200000;
	int count3=500;
	
	formatFollowersCount(count1);
	printf("\n");
	formatFollowersCount(count2);
	printf("\n");
	formatFollowersCount(count3);
	printf("\n");
}
