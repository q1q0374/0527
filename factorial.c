#include<Stdio.h>

int fac(int n)
{
	if(n==1)
	{
		return 1;
	}
    return	n*fac(n-1);
	printf("%d ",n);
}
int main()
{
	printf("%d",fac(4));
	return 0;
}
