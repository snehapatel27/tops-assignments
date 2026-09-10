#include<stdio.h>
main()
{
	int i;
	int minutes[7];
	FILE *fp;
	fp=fopen("music_log.txt","w");
	if(fp==NULL)
	{
		printf("file can not open");
	}
	for (i = 0; i < 7; i++)
    {
        printf("Enter minutes for day %d: ", i + 1);
        scanf("%d", &minutes[i]);
		fprintf(fp, "Day %d: %d minutes\n", i + 1, minutes[i]);
    }
    fclose(fp);

    printf("\nMusic listening data saved successfully!");
}
