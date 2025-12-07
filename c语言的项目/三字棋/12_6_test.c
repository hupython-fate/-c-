#include "12_6_game.h"
//测试游戏代码
//
//
//游戏一开始的菜单。
void menu()
{
	printf("新的征程开始了！哦，勇敢的少年少女啊，干敢和电脑酱我再下一局吗?哦～阿哈哈哈\n");
	printf("**********************************************\n");
	printf("***********  0,exit       ********************\n");
	printf("***********  1,play       ********************\n");
	printf("**********************************************\n");
	printf("**********************************************\n");
}

//根据pan_duan()函数的返回值来决定打印什么的函数。
void pan(char ch)
{
	if(ch=='*')
	{
		printf("玩家赢了！恭喜！\n");
	}
	else if(ch=='#')
	{
		printf("电脑赢了！电脑酱！恭喜！\n");
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

//游戏的主逻辑和主要功能，都集中在这个函数里了。
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
		if(ch!='c') break;				//问题出在这里吗？如果pan_duan()函数的返回值不是c，那么就跳出game内的循环。
								//这和目前的问题的结症很像，一开始用户输入1后，打印初始化的棋盘，然后提示用户输入，然而无论输入的是什么，都会重新打印菜单。
								//可以，注释掉这一行后，旧问题就解决了。
								//这个问题本质上是传参的数据类型不相符的问题。
		printqipan(qipan,han,lie);//打印棋盘

		pcplay(qipan,han,lie);//电脑下棋
		ch=pan_duan(qipan,han,lie);//同上
		pan(ch);//同上
		//if(ch!='c') break;
		printqipan(qipan,han,lie);//同上
		if(ch != 'c') break;
	}
}

//整个程序的主函数，程序的入口和出口。
int main(void)
{
	srand((unsigned int)time(NULL));//生成随机数的起点？
	int a;//定义一个变量来储存用户的最开始的输入。
	do{//游戏的主循环。
		menu();
		printf("请选择：>>");
		scanf("%d",&a);
		switch(a)
		{
			case 1://printf("开始游戏三字棋。\n");
				game();//游戏的关键和重点。
				break;//一个break可以用于退出这个switch，而如果多写一个break，那么就会退出游戏的主循环。
			case 0:
				printf("退出游戏。\n");
				break;
			default:
				printf("选择错误，请重新输入。\n");
				//continue;
				break;
		}
	}while(a);//因为c语言中零代表假，非零代表真，所以只要用户不输入0,那么这个游戏就会无限玩下去。

	return 0;
}
