#include<stdio.h>
int swapPlaylistCounts(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
}
main(){
	int playlist1=50;
	int playlist2=80;
	
	printf("before swaping:\n");
	
	printf("playlist1=%d\n",playlist1);
	printf("playlist2=%d\n",playlist2);

	swapPlaylistCounts(&playlist1,&playlist2);
	printf("after swaping:\n");
	
	printf("playlist1=%d\n",playlist1);
	printf("playlist2=%d\n",playlist2);
}
