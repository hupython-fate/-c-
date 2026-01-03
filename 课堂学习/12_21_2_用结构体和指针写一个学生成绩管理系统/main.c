#include "head.h"

void clear_input_buffer() {//一个很重要的应对输入时的问题的函数。
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void)
{
	int i=0;
	while(1)
	{
		char choice=0;
		printf("\033[2J");//清屏用的。
		printf("=================欢迎来到学生成绩管理系统！==================\n");
		printf("=                                                            =\n");
		printf("=                   a,新增学生信息。                         =\n");
		printf("=                   b,删除某学生信息。                       =\n");
		printf("=                   c,查询学生信息。                         =\n");
		printf("=                   d,修改学生的信息。                       =\n");
		printf("=                   e,退出学生成绩管理系统。                 =\n");
		//这就设为学生管理系统的主界面吧，然后每一个功能写一个函数，分别有查询界面，新增界面,修改界面等等。
		printf("\n\n");
		printf("请输入你的选择：____\b\b\b\b");
		scanf("%c",&choice);//这个变量可以设为全局变量。
		clear_input_buffer();//清空缓冲区。
		switch(choice)
		{
			case 'a':
				caret_main();//新增
				break;
			case 'b':
				del_main();//删除
				break;
			case 'c':
				query_main();//查询
				break;
			case 'd':
				modify_main();//修改
				break;
			case 'e':
				printf("已退出！");
				return 0;
			default:
				printf("您输入的选项不在选择范围内！\n");
				printf("请重新输入！\n");
				sleep(3);
				continue;
		}
	}
	return 0;
}
