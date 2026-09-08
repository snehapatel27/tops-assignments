#include<stdio.h>
#include<ctype.h>
main()
{
	FILE *fp;
	char song[50];
	int i ,found;
	fp=fopen("playlist.txt","r");
	if(fp==NULL)
	{
		printf("file not found!");
	}
	while(fgets(song,sizeof(song),fp)!=NULL)
	{
		found=0;
		for(i=0;song[i]!='\0';i++)
		{
			if(tolower(song[i])=='l'&&
			tolower(song[i+1])=='o'&&
			tolower(song[i+2])=='v'&&
			tolower(song[i+3])=='e')
			{
				found=1;
				break;
			}
		}
		if(found==1)
		{
			printf("%s\n",song);
		}
		
	}
	fclose(fp);
	
}
