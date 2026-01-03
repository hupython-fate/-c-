#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#define Subject 9

typedef struct stu//结构体类型的声明
{
	char name[30];
	int nan_or_nv;//用1表示男性，用0表示女性
	int age;//年龄。
	int chengji[9];//用一个数组来储存学生的不同的成绩
	int sum;
	struct stu *next;
}stu;


extern char name[Subject][30];//声名一个二维数组//用来装科目名的。
			      //可以用一个顺序表来装科目名，不过用现在这样也不错。
extern int b;//b的值为用户输入的学生人数。
	
extern char filename[50];//使这个文件名阔展到整个程序


//在这里声名的函数是为了让这个函数在其它文件中被调用，如果只在自己的文件中被调用，那么就不用写到头文件中来。

//第一个文件
int caret_main();//caret文件的主函数
void writefile(stu *,char *);//把用户的输入写入一个文件中
stu *readfile();

//第二个文件
void del_main();

//第三个文件
void query_main();

//第四个文件
void modify_main();

void clear_input_buffer();//清空缓冲区的函数。
