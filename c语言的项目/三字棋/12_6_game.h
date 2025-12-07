//游戏代码的声明

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define han 3
#define lie 3


//init qiban of han shu.
void initqipan(char qiban[han][lie],int a,int b);

//print qiban of han shu 
void printqipan(char qiban[han][lie],int a,int b);

//玩家下棋
void wanplay(char qipan[han][lie],int a,int b);

//电脑下棋
void pcplay(char qipan[han][lie],int a,int b);

//判断输赢的函数
char pan_duan(char qipan[han][lie],int a,int b);
//可以约定，如果玩家赢，返回*
//如果电脑赢，返回#
//如果平局，返回q
//如果不是三种清况之一，也就是说，游戏继续，返回c
//

//判断棋盘格子有没有满的函数。
char pan_man(char qipan[han][lie],int a,int b);


//在头文件中声明函数的原型，不过为什么要在自定义的头文件中呢？
//仔细想一想也能明白，起的是媒介的作用，把game.c和test.c中的函数定义和调用联系起来。
//游戏的主函数在test.c中，而game.c和test.c都包含了自定义的头文件。
