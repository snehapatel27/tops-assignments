#include<stdio.h>
main()
{
	FILE *fp;
	int day,minutes;
	int total=0;
	float average;
	int highest=0;
	
	fp=fopen("music_log.txt","r");
	
	if(fp==NULL)
	{
		printf("file can not open");
	}
	while(fscanf(fp, "Day %d: %d minutes", &day, &minutes) == 2)	{
		total=total+minutes;
		
		if(minutes>highest)
		{
			highest=minutes;
		}
	}
	 average = total / 7.0;
	 printf("\n===== Weekly Report =====\n");
	 printf("Total Listening Minutes: %d\n", total);
     printf("Average Listening Minutes: %.2f\n", average);
	 printf("Highest Listening Minutes: %d\n", highest);
	 fclose(fp);

}
