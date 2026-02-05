#include <stdio.h>
int main(void)
{
	//最开始，博士的朋友数是5,第n周减n，余下数量翻倍，也就是*2.
	//博士的朋友的最大数量是150个人。也就是邓巴数。
	
	int bo=5;
	int zo=0;
	do
	{
		zo++;
		bo=bo-zo;
		bo=bo*2;
		printf("第%d周，博士的朋友数为%d\n",zo,bo);
	}while(bo<=150);
	printf("第%d周，博士的朋友达到理论最大值。",zo);
	return 0;
}
