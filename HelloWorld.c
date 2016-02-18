#include <stdio.h>

int main(void)
{
	int add_cnt=0;
	int sum=0;

	printf("Hello world\n" );

	printf("please input an num");
	printf("add_cnt=:");
	scanf("%d",&add_cnt);

	for(int i=0; i<=add_cnt; i++)
	{
		sum += i;
	}

	printf("sum of num from 0 to %d is %d\n",add_cnt,sum );
	
	return 0;
}
