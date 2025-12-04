#include <stdio.h>



/*
void wan()
{	int qi[3][3];
	while(1)
	{
		int a,b;
		printf("	 	|	|	\n");
		printf("3		|	|	\n");
		printf("	------------------------\n");
		printf("		|	|	\n");
		printf("2		|	|	\n");
		printf("	------------------------\n");
		printf("		|	|	\n");
		printf("1		|	|	\n");
		printf("           1         2        3 \n");
		printf("玩家请下棋！\n");
		printf("请玩家输入坐标（行，列）>>");
		scanf("%d %d",&a,&b);
		if(a<1 || b<1 || a>3 || b>3)
		{
			printf("请输入正确的坐标！例如，1，3\n");
			continue;
		}
		else
		{
		}
	}
}*/


void kai()
{	
	int x;
	while(1)
	{
		printf("**************************************\n");
		printf("******* 1,play ***********************\n");
		printf("******* 0,exit ***********************\n");
		printf("**************************************\n");
		printf("\n");
		printf("玩家请选择>>");
		scanf("%d",&x);
		if(x==1)
		{
			printf("开始三字棋！\n");
			wan();
			break;
		}
		else if(x==0)
		{
			printf("游戏退出！");
			break;
		}
		else
		{
			printf("错误选择！\n");
			continue;
		}
	}

}
//最进有些牙痛，似乎是智齿的问题，连带着心情有些不好，右边的智齿有些疼，为什么会智齿痛呢？
int main(void)
{
	kai();
	return 0;
}
