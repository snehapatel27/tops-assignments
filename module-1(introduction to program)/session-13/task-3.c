#include<stdio.h>
main(){
	FILE *fp;
	fp=fopen("playlist.txt","a");
	if(fp==NULL)
	{
		printf("file can not be oppend");
	}
	else{
		fprintf(fp,"\n let mee love you");
		fprintf(fp,"\n dil ibadat");
		printf("append sucessfully");
		
		fclose(fp);
	}
}
