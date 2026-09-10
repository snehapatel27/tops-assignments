#include<stdio.h>
main()
{
	int minutes[7];
	int i;
	for(i=0;i<7;i++)
	{
		printf("enter minutes for day %d",i+1);
		scanf("%d",&minutes[i]);
	}
	printf("\nMusic Listening Data:\n");

    for (i = 0; i < 7; i++)
    {
        printf("Day %d: %d minutes\n", i + 1, minutes[i]);
    }


}
