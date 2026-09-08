#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("playlist.txt","w");
	if(fp==NULL)
	{
		printf("file can not be opend");
	}
	else{
		fprintf(fp,"tum hi ho\n");
		fprintf(fp,"apna bana le\n");
		fprintf(fp,"kesariya \n");
		
		fclose(fp);
		printf("song saved sucessfully");
	}
}
