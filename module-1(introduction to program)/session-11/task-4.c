#include<stdio.h>
void incrementfollowers(int *followers,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		*(followers+i)=*(followers+i)+100;
	}
}
main(){
	int followers[5]={400,600,550,700,450};
	incrementfollowers(followers,5);
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\n",followers[i]);
	}
}
