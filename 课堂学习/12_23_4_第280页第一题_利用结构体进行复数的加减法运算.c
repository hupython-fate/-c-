#include <stdio.h>

struct fa
{
	float shu;
	char zi;
};

struct fa data[30];
int a=1,*p=&a;//使用传递地址的方式，使函数在运行过程中能改变a的值。
void input(int *p)
{
	int i=-1;
	if(*p==1)//在本程序中只出现一次
	{
		printf("欢迎来到计算器！请输入您的算式并按下回车！\n");
		printf("示例：1+2+3=\n");
		(*p)++;
	}
	printf(">>>");
	do{
		i++;
		//printf("aaa");
		scanf("%f%c",&data[i].shu,&data[i].zi);
		/*if(data[i].zi=='=')
			break;*/
	}while(data[i].zi!='=');

}

void print()//打印出来看看输入的效果
{
	int i=-1;
	do{
		i++;
		printf("%.3f   %c\n",data[i].shu,data[i].zi);
	}while(data[i].zi!='=');
}

//输入函数写好了
//接下来就是获得运算的结果的函数了，为了计算的合理性，返回值的类型应该为float。
float jisuan(struct fa data[])
{
	//printf("ssss");
	float k=0,x=0;
	int i=0;
	while(data[i].zi!='=')
	{
		if(data[i].zi=='+')
		{
			//k=data[i].shu+data[i+1].shu;	
			k=data[i].shu;
			x+=k;
		}
		else if(data[i].zi=='-')
		{
			//k=data[i].shu-data[i+1].shu;
			k=data[i].shu;
			x-=k;
		}
		i++;
		//x+=k;
	}
	//如果要加上乘和除的话，那么就涉及运算的优先级的问题，所以这个程序目前先只完成复数的加和减运算。
	return x;
}

int main(void)
{
	input(p);
	print();
	//printf("zzz");
	float y=jisuan(data);
	printf("计算结果为%.3f",y);
	return 0;
}


//思考一下，怎么利用结构成体进行复数的加减法?
	//比如说用户输入1+2+3,按下回车，应该输出6
	//比如说用户输入12-78+12,按下回车，应输出-54
	//
	//用结构体，也就是说int+char？    +-*/四个是字符
	//思考一下这个程序的思路
	//
	//用户输入的本质上是一串字符串，有数字，有字符，而我已经知道如何把各个位数转化为数字了，在这个的基础上，如果不考虑异常处理，实现复数的加减法是可行的。
	//可是又该怎么用到结构体？
	//结构体说白了是数据类型，也就是放数据的容器。
	//也就是说，要把用户输入的值存进一个专门的结构体数组或变量中。
	//然后，再利用这个结构体。
	//也就是说，分三步走，写三个子函数
	//一，获取用户的输入
	//二，处理用户的输入，计算出结果
	//三，把计算结果打印出来。

