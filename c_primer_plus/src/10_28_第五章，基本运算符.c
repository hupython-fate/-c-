#include <stdio.h>
#define miao 60 
int main()//第五章的练习一 
{
	float xiao=0.0;
	float miaoshu=0.0;
	float miao1=1.0;
	
	while(miao1>0)
	{
		printf("\n请输入分钟数：");
	    scanf("%f",&miao1);
	    miaoshu=miao1*miao;
	    xiao=miao1/miao;
	    printf("您输入的分钟数，转换成秒数是%.2f秒,转换成小时数是%.2f小时。",miaoshu,xiao);
    }
    return 0;	  
}
