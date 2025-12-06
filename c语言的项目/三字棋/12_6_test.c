#include "12_6_game.h"
//测试游戏代码
//
//

void menu()
{
	printf("**********************************************\n");
	printf("***********  0,exit       ********************\n");
	printf("***********  1,play       ********************\n");
	printf("**********************************************\n");
	printf("**********************************************\n");
}

void pan(char ch)
{
	if(ch=='*')
	{
		printf("玩家赢了！恭喜！\n");
	}
	else if(ch=='#')
	{
		printf("电脑赢了！恭喜！\n");
	}
	else if(ch=='q')
	{
		printf("两方平局，请玩家不要气馁！\n");
	}
	else if(ch=='c')
	{
		printf("\n");
	}

}

void game()
{
	char ch=0;
	char qipan[han][lie]={0};
	//要有一个初始化棋盘的函数
	initqipan(qipan,han,lie);
	printqipan(qipan,han,lie);

	//玩家下棋和电脑下棋
	while(1)
	{
		wanplay(qipan,han,lie);//玩家下棋
		ch=pan_duan(qipan,han,lie);//判断结果
		pan(ch);//根据上一个函数的返回值判断结果
		if(ch!='c') break;
		printqipan(qipan,han,lie);//打印棋盘

		pcplay(qipan,han,lie);//电脑下棋
		ch=pan_duan(qipan,han,lie);//同上
		pan(ch);//同上
		if(ch!='c') break;
		printqipan(qipan,han,lie);//同上
	}
}


int main(void)
{
	srand((unsigned int)time(NULL));//生成随机数的起点？
	int a;
	do{

		menu();
		printf("请选择：>>");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				//printf("开始游戏三字棋。\n");
				game();
				break;
			case 0:
				printf("退出游戏。\n");
				break;
			default:
				printf("选择错误，请重新输入。\n");
				//continue;
				break;

		}
	}while(a);
	return 0;
}
