#include<stdio.h>

main(){
	int CricketScore[3][2]={
	{190,210},
	{200,150},
	{240,140}
};
	int i;
	int highest;
	for(i=0;i<3;i++)
	{
		highest=CricketScore[i][0];
		if(CricketScore[i][1]>highest)
		{
			highest=CricketScore[i][1];
		}
		printf("\n match %d Highest scrore is=%d",i+1,highest);	
	}
}
