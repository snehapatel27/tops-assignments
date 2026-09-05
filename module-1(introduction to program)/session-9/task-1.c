#include<stdio.h>
main(){
	int dailysteps[7]={4000,5600,7700,7900,8000,8800,9000};
	int i;
	for(i=0;i<7;i++){
		printf("\n days=%d steps=%d",i+1,dailysteps[i]);
	}
}
