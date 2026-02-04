#include <stdio.h>

void ppp(int (*x)[3],int y,int cc[])
{
	int *p=&x[0][0],*p1=NULL,kkk=0,h=0,i=0,j=0;

	for(p1=p;p<p1+y;p++)
		if(*p>kkk)
			kkk=*p;

	//最大值求出来了,最大值就是kkk
	//根据求的最大值反向求出行和列
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			if(kkk==x[i][j])
			{	h=1;
				break;
			}
		if(h) break;
	}
	//printf("%d %d %d",i,j,kkk);
	cc[0]=i+1;
	cc[1]=j+1;
	cc[2]=kkk;
}



int main(void)
{
	int *p,*p1;//定义了两个int类型的指针
	int arr[3][3];//定义了一个二维数组。
	int daan[3]={0};

	printf("请输入9个数：");
	for(p=&arr[0][0],p1=p;p<p1+9;p++)//获取用户输入部分
		scanf("%d",p);
	
	int (*xx)[3]=arr;//定义一个指向二维数组的指针。
	ppp(xx,9,daan);
	
	p1=daan;//不直接返回数组，而是不返回任何，修改外部数组的数值。
	printf("在第%d行，第%d列，求得最大值%d",*p1,*(p1+1),*(p1+2));
	return 0;
}
