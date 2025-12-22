#include <stdio.h>
#include <string.h>

#define hunman 50
#define Subject 9

void input();//函数的声明
	     //
struct stu//结构体类型的声明
{
	char name[20];
	char nan_or_nv;//用a表示男性，用b表示女性
	int age;//年龄。
	int chengji[9];//用一个数组来储存学生的不同的成绩
};

extern char name[Subject][30];//声名一个二维数组//用来装科目名的。

extern int a;//a的值为用户输入的科目数。
//将变量的声明放在头文件中，就会使这个变量变成全局变量！这样，就可以实现变量在不同函数中的复用了。
extern int b;//b的值为用户输入的学生人数。
      //
extern struct stu student_data[hunman];

void zhongfen();//计算总分的函数的声名。
