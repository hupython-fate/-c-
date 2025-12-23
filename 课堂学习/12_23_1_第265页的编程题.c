#include <stdio.h>

int main(void)
{

	struct workman{
		int bian;
		char name[20];
		int chengji[2];
	};

	struct workman jieguo[3]={{1501,"王虎",89,92},{1502,"李雪",87,96},{1503,"张杨",82,85}},*p,*q;

	/*for(p=jieguo;p<jieguo+3;p++)
		printf("%d %s %d %d\n",p->bian,p->name,p->chengji[0],p->chengji[1]);*/

//printf("%d",sizeof(jieguo));//只能用来求字节数，不能用来求结构体数组的元素个数。
			    //怎么求结构体数组的元素个数？



	int cj=0;
	for(p=jieguo;p<jieguo+3;p++)
		if(cj<p->chengji[0]+p->chengji[1])
		{
			q=p;
			cj=p->chengji[0]+p->chengji[1];
		}
	printf("成绩最大的员工信息为%d,%s,%d,%d",q->bian,q->name,q->chengji[0],q->chengji[1]);
	
	return 0;
}
