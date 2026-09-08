#include<stdio.h>
main(){
	FILE *fp;
	fp=fopen("playlist.txt","r");
	char song[30];
	if(fp == NULL)
    {
        printf("File cannot be opened");
    }
    else
    {
        while(fgets(song, 30, fp) != NULL)
        {
            printf("%s", song);
        }

        fclose(fp);
    }

}
