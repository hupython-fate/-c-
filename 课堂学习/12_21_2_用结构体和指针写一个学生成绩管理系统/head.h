#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#define Subject 9

typedef struct stu stu;

typedef struct stu//结构体类型的声明
{
	char name[20];
	char nan_or_nv;//用a表示男性，用b表示女性
	int age;//年龄。
	int chengji[9];//用一个数组来储存学生的不同的成绩
	stu *next;
}stu;

extern char name[Subject][30];//声名一个二维数组//用来装科目名的。
			      //可以用一个顺序表来装科目名，不过用现在这样也不错。
extern int a;//a的值为用户输入的科目数。
extern int b;//b的值为用户输入的学生人数。
		 
//第一个文件
int caret_main();//caret文件的主函数
void input_we();//函数的声明
stu *caret();//新增界面的主函数，创建一个动态列表。
void input(stu *,int );
void fprintf_caret(stu *);//把用户的输入写入一个文件中
void cha_kan();//查看选项。
void an_cheng_print();//按成绩从到到低进行排序，也就是说，对顺序表进行排序操作。
stu *readfile();
void printlist(stu *);
