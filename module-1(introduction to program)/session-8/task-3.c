#include<stdio.h>
void increaseFollowersByValue(int followers)
{
	followers = followers +1000;
	printf("inside value function:%d \n",followers);
}

void increaseFollowersByReferance(int *followers)
{
	*followers = *followers +1000;
	printf("inside reference function:%d \n",*followers);
}
main()
{
	int followers=5000;
	printf("original followers %d\n",followers);
	
	increaseFollowersByValue(followers);
	printf("after pass by value:%d \n",followers);
	
	increaseFollowersByReferance(&followers);
	printf("after pass by Referance: %d \n",followers);
	
}
