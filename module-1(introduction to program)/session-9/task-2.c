#include<stdio.h>
main(){
	int playlistrating[3][5]={
	{5,4,5,3,4},
	{4,5,3,5,4},
	{3,4,4,5,5}
	};
	int i;
	printf("secound playlist:\n");
	for(i=0;i<5;i++){
		printf("%d\t",playlistrating[2][i]);
	}
}
