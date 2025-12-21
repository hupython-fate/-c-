#include "head.h"
//函数的定义全部放到这个文件中。
//
int a,b;
char name[Subject][30]={0};
struct stu student_data[hunman];

//
//
//
void input()//函数的定义
{
	int i;//声明第一个局部变量
	int k1;//第二个居部变量k1

	printf("欢迎来到学生成绩管理系统！\n");
	while(1)
	{
		printf("请问您要统计几门学科的成绩：");
		printf("___\b\b");//为了更优雅
		k1=scanf("%d",&a);
		if(a>Subject || a<=0)
		{
			printf("不好意思，这个系统最大的科目数为9,请您重新输入！\n");
			continue;
		}
		if(k1!=1)
		{
			printf("不好意思，请不要调皮，请输入数字而不是其它，比如按了ctrl + d，或者是输入了abc之类的。\n");
			printf("总而言之，请您重新输入！\n");
			continue;
		}
		break;
	}

	//接下来询问每一门科目的名字
	for(i=0;i<a;i++)
	{
		printf("请问第%d门科目的名字是：",i+1);
		scanf("%s",&name[i]);//使用数组而不是结构体。
	}


	//接下来问要输入的学生数
	while(1)
	{
		printf("请问您要输入多少个人的成绩？（问人数）：");
		k1=scanf("%d",&b);
		if(b>hunman || b<0)
		{
			printf("不好意思，这个系统最大的人数是50人，请您重新输入！\n");
			continue;
		}
		if(k1!=1)
		{
			printf("不好意思，请不要调皮，请输入数字而不是其它，比如按了ctrl + d，或者是输入了abc之类的。\n");
			printf("总而言之，请您重新输入！\n");
			continue;
		}
		break;
	}

	//接下来就是问每一个人的具体信息了
	//这得定义一个结构体数组，最大容量为50,也就是hunman的值。
	//这个结构体数组必须是声名在头文件中的。
	
	char xuan;//第三个局部变量

	for(i=0;i<b;i++)//复用之前定义的局部变量i
	{
		int j=0;//声明第四个局部变量
		printf("请输入第%d个学生的姓名：",i+1);
		scanf("%s",&student_data[i].name);
		while(1)
		{
			printf("请选择第%d个学生%s的性别：\n",i+1,student_data[i].name);
			printf("a,男/man\n");
			printf("b,女/weman\n");
			printf("您的选择：");
			printf("___\b\b");
			scanf("%c",&xuan);
			switch(xuan)
			{
				case 'a':
					student_data[i].nan_or_nv=a;	
					break;
				case 'b':
					student_data[i].nan_or_nv=b;
					break;
				case 'A':
					student_data[i].nan_or_nv=a;
					break;
				case 'B':
					student_data[i].nan_or_nv=b;
					break;
				default:
					printf("不好意思，请不要乱输数据哦！\n");
					printf("请重新输入：\n");
					continue;
			}
			break;
		}

		//接下来是学生的年龄。
		while(1)
		{
			printf("请输入第%d个学生%s的年龄：",i+1,student_data[i].name);
			k1=scanf("%d",&student_data[i].age);
			if(student_data[i].age>90 || student_data[i].age<0 || k1!=1)
			{
				printf("请不要乱输数据！\n");
				printf("请重新输入！\n");
				continue;
			}
			break;
		}

		//最后是学生的各个科目的成绩
		for(j=0;j<a;j++)//a是声明在头文件中的全局变量，储存的是科目的数量
		{
			while(1)
			{
				printf("请您输入第%d个学生%s的%s科目的成绩：",i+1,student_data[i].name,name[j]);
				k1=scanf("%d",&student_data[i].chengji[j]);
				if(k1!=1)
				{
					printf("请不要乱输数据！\n");
					printf("请重新输入！\n");
					continue;
				}
				break;
			}
		}

	}
}//第一个函数总算写完了。也不难，就是需要耐心和时间。
