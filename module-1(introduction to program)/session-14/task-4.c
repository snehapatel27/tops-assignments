#include<stdio.h>
main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i%2==0)   // i/2==0 is incorect because it is division used to remider oprator
		{
			printf("%d\n",i);
		}
	}
}
