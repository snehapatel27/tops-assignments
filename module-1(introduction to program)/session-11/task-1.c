#include<stdio.h>
main()
{
	int likes=500;
	int *ptrlikes;
	ptrlikes=&likes;
	printf("value of like=%d",likes);
	printf("\naddress of ptrlikes= %p",ptrlikes);
}
