#include <stdio.h>
int main()
{
	float a;
	printf("请输入你的行李的重量(kg)：");
	scanf("%f",&a); 
    if(a<20)
    {
        for(int i=0;i<1000;i++);//用于延时。 
        printf("您的行李小于20kg,可以免费托运。");
    }
    else if(a>=20 && a<30)
    {
        for(int i=0;i<1000;i++);
        printf("您的行李超出部分为%.1fkg,每千克30元，您需要花%.1f元。",a-20,(a-20)*30);
    }
	else if(a>=30 && a<40)
	{
	    for(int i=0;i<1000;i++);
	    printf("您的行李超出部分为%.1fkg,每千克40元，您需要花%.1f元。",a-30,(a-30)*40);
    }
	else if(a>=40 && a<50)
	{
	    for(int i=0;i<1000;i++);
	    printf("您的行李超出部分为%.1fkg,每千克50元，您需要花%.1f元。",a-40,(a-40)*50);
	}
	else
	{
	    for(int i=0;i<1000;i++);
	    printf("您的行李超过50千克，不允许个人携带。");
	}
} 
