#include<stdio.h>
struct bookMyShow
{
	char movie[30];
	int screen;
	
	struct time
	{
		int hours;
		int minutes;
	}time;
};
main()
{
	struct bookMyShow show={"Avengers",3,{10,30}};
	printf("Movie:=%s Screen:=%d Time:=%d %d",show.movie,show.screen,show.time.hours,show.time.minutes);
}
