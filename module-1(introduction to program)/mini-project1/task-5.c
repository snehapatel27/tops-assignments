#include <stdio.h>

main()
{
    int minutes[7] = {0};
    int choice;
    int i;
    char confirm;
    FILE *fp;

    do
    {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log New Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Reset Weekly Data\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                
                for(i = 0; i < 7; i++)
                {
                    printf("Enter minutes for day %d: ", i + 1);
                    scanf("%d", &minutes[i]);
                }

                fp = fopen("music_log.txt", "w");

                if(fp == NULL)
                {
                    printf("File cannot be opened");
                    break;
                }

                for(i = 0; i < 7; i++)
                {
                    fprintf(fp, "Day %d: %d minutes\n",
                            i + 1, minutes[i]);
                }

                fclose(fp);

                printf("Data saved successfully!\n");
                break;


            case 2:
                printf("\n===== Weekly Data =====\n");

                for(i = 0; i < 7; i++)
                {
                    printf("Day %d: %d minutes\n",
                           i + 1, minutes[i]);
                }

                break;


            case 3:

                printf("Are you sure you want to reset data? (y/n): ");
                scanf(" %c", &confirm);

                if(confirm == 'y' || confirm == 'Y')
                {
                
                    for(i = 0; i < 7; i++)
                    {
                        minutes[i] = 0;
                    }

                    fp = fopen("music_log.txt", "w");

                    if(fp == NULL)
                    {
                        printf("File cannot be opened");
                        break;
                    }

                  
                    fclose(fp);

                    printf("Weekly data reset successfully!\n");
                }
                else
                {
                    printf("Reset cancelled.\n");
                }

                break;


            case 4:

                printf("Thank you for using Music Listening Logger!\n");
                break;


            default:

                printf("Invalid choice!\n");
        }

    } while(choice != 4);
}
