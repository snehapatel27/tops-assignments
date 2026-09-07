#include<stdio.h>
main(){
	int orderAmounts[5]={250,180,300,150,400};
	int *p=orderAmounts;
	int i;
	for(i=0;i<5;i++)
	{
		printf("amount=%d,address=%p\n",*(p+i),p+i);
	}
	
}
