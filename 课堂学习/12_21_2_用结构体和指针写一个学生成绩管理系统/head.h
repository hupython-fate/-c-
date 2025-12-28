#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Subject 9

struct stu//结构体类型的声明
{
	char name[20];
	char nan_or_nv;//用a表示男性，用b表示女性
	int age;//年龄。
	int chengji[9];//用一个数组来储存学生的不同的成绩
	struct stu *next;
};


extern char name[Subject][30];//声名一个二维数组//用来装科目名的。
extern int a;//a的值为用户输入的科目数。
extern int b;//b的值为用户输入的学生人数。
		 
//第一个文件
int caret_main();//caret文件的主函数
void input_we();//函数的声明
struct stu *caret();//新增界面的主函数，创建一个动态列表。
void input(struct stu *,int );
void fprintf_caret(struct stu *);//把用户的输入写入一个文件中

