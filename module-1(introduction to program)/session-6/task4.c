#include<stdio.h>
main(){
//	Entry-controlled loop:
	/* In an entry-controlled loop, the condition is checked before executing the loop body. 
	for and while loops are entry-controlled loops.*/
	int i = 10;
	
	while(i > 5)
	{
	    printf("\n%d", i);
	    i--;
	}
//	Exit-controlled loop:
	/*	In an exit-controlled loop, the loop body is executed before checking the condition.
		 do-while is an exit-controlled loop.*/	
	 int j = 10;
	
	do
	{
	    printf("\n%d", j);
	    i++;
	} while(j < 5);
}
