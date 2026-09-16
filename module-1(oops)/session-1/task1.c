#include<stdio.h>
char task[5][50];
main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter the task:=",i+1);
		scanf("%s",task[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d.%s\n",i+1,task[i]);
	}
}
