#include <stdio.h>
int main()
{
	int i,sum=0;
	int a[]={1,2,3,4,5};
	for(i=0;i<5;i++)
	{
		if(i%2==0)
		sum+=*(a+i);
		else
		sum-=*(a+i);
	}
	printf("%d",sum);
	return 0;
}