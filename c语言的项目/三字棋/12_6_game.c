#include "12_6_game.h"
//游戏代码的主逻辑
//
//1,初始化棋盘的函数
void initqipan(char qipan[han][lie],int a,int b)
{
	int i=0,j=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			qipan[i][j]=' ';//初始化棋盘。
		}
	}
}

//2,打印棋盘的函数
void printqipan(char qiban[han][lie],int a,int b)
{

	int i=0;
	for(i=0;i<a;i++)
	{
		int j=0;
		for(j=0;j<b;j++)
		{
		//打印数据
			printf(" %c ",qiban[i][j]);
			if(j<b-1)
				printf("|");
		}
		printf("\n");



		//打印分隔行
		if(i<a-1)//最后要少一行，所以这样做。
		{
			for(j=0;j<b;j++)//b是列数，这是把"---|"视为了一组。
			{
				printf("---");
				if(j<b-1)
					printf("|");
			}
			printf("\n");
		}
	}
}

//3,玩家下棋的函数
void wanplay(char qipan[han][lie],int a,int b)
{
	int aa,bb;
	while(1)
	{
		printf("玩家下棋：\n");
		printf("请玩家输入坐标>>");
		scanf("%d %d",&aa,&bb);
		//输入坐标合法性的判断。
		if(aa>=1 && aa<=a && bb>=1 && bb<=b)
		{
			if(qipan[aa-1][bb-1]==' ')
			{
				qipan[aa-1][bb-1]='*';
				break;
			}
			else
			{
				printf("此位置已经被下过了，不能重下。");
				continue;
			}
		//	break;
		}
		else 
		{
			printf("输入的坐标不合理！请重新输入！");
			continue;
		}
	}
}

//4,电脑下棋
//随机生成一个坐标，如果这个坐标合法且没有被下过，那么电脑就下那里。
void pcplay(char qipan[han][lie],int a,int b)
{
	printf("电脑下棋:>>\n");
	while(1)
	{
		int aa=rand()%a;//rand()是生成随机数的函数。
		int bb=rand()%b;
		if(qipan[aa][bb]==' ')
		{
			qipan[aa][bb]='#';
			break;
		}
	}
}


//5,判断输赢的函数
char pan_duan(char qipan[han][lie],int a,int b)
{
	int i=0,j=0;
	for(i=0,j=0;i<a;i++)//判断行是否相等
	{
		if(qipan[i][j]==qipan[i][j+1] && qipan[i][j+1]==qipan[i][j+2] && qipan[i][j]!=' ')
		{
			return qipan[i][j];
		}
	}
	for(i=0,j=0;j<b;j++)//判断列是否相等		{
	{
		if(qipan[i][j]==qipan[i+1][j] && qipan[i+2][j]==qipan[i+1][j] && qipan[i][j]!=' ')
		{
			return qipan[i][j];
		}
	}
	//对角线
	if(qipan[0][0]==qipan[1][1] && qipan[1][1]==qipan[2][2] && qipan[1][1]!=' ')
	{
		return qipan[1][1];
	}
	if(qipan[0][2]==qipan[1][1] && qipan[1][1]==qipan[2][0] && qipan[1][1]!=' ')
	{
		return qipan[1][1];
	}

	//如果程序能走到这里，也就是说，没有人赢，要么是棋盘满了平局，要么是棋盘没有满继续。
	switch(pan_man(qipan,han,lie))//这里的返回值是字符型
	{
		case '2'://这里的常量也应该是字符型
			return 'q';//平局
			break;
		case '3':
			return 'c';//游戏继续。
			break;
	}
}

//6,判断棋盘有没有满的函数
char pan_man(char qipan[han][lie],int a,int b)
{
	int i,j,h=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			if(qipan[i][j]!=' ' && (qipan[i][j]=='*' || qipan[i][j]=='#'))
			{
				//能进来这里，说明这个格子满了
				//那么
				h++;//满的格子数加一。
			}
		}
	}
	if(h==9)//说明格子满了
	{
		return '2';
	}
	else if(h<9)//说明格子没满
	{
		return '3';
	}
}
