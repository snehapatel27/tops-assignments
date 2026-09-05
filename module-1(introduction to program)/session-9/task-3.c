#include<stdio.h>
float calculateAvrage(int amount[],int size)
{
	int sum=0;
	int i;
	for(i=0;i<size;i++){
		sum=sum+amount[i];
		printf("\n %d",sum);
	}
	return(float)sum/size;
}
main(){
	int dailyorders[7]={100,300,450,250,550,500,700};
	float avrage;
	avrage=calculateAvrage(dailyorders,7);
	printf("Average weekly spend = %.2f",avrage);

	
}
