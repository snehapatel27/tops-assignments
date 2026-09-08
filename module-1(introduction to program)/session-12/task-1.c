#include<stdio.h>
struct playlist
{
	char title[50];
	char artist[50];
	int duration;
};
main(){
	struct playlist song={"Tum Hi Ho","arijit singh",262};
	printf("title:%s\n",song.title);
	printf("artist:%s\n",song.artist);
	printf("suration:%d\n",song.duration);
}


