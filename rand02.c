#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i;
	srand(time(NULL));
	for(i=1;i<=15;i++)
	    printf("%2d:%d\n",i,rand());
	return 0;
}

