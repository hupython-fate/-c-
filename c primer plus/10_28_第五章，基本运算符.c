#include <stdio.h>
#define miao 60 
int main()//�����µ���ϰһ 
{
	float xiao=0.0;
	float miaoshu=0.0;
	float miao1=1.0;
	
	while(miao1>0)
	{
		printf("\n�������������");
	    scanf("%f",&miao1);
	    miaoshu=miao1*miao;
	    xiao=miao1/miao;
	    printf("������ķ�������ת����������%.2f��,ת����Сʱ����%.2fСʱ��",miaoshu,xiao);
    }
    return 0;	  
}
