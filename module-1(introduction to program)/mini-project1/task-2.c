#include<stdio.h>
main()
{
	int number,ch,minutes[7];
	int i;
	do{
		printf("\n press 1. Log New Listening Minutes");
	printf("\n press 2. View Weekly Summary");
	printf("\n press 3. Exit");
	
	printf("\n enter your choice:");
	scanf("%d",&ch);
	
	switch (ch)
	{
		case 1:
			for(i=0;i<7;i++)
			{
				printf("Enter minutes for day %d: ", i + 1);
                scanf("%d", &minutes[i]);
			}
			break;
		case 2:
			 for (i = 0; i < 7; i++)
    		{
        		printf("Day %d: %d minutes\n", i + 1, minutes[i]);
    		}
    		break;
    	case 3:
                printf("\n Exit!");
                break;
		default:
                printf("\nInvalid choice!");
			
		}
	
	}while(ch !=3);
}
