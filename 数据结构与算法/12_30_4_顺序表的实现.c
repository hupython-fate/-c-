#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	int age;
	char nan_huo_nv[4];
	char name[20];
	char miao_shu[1024];
}people;


//定义一个成员为一维数组和int类型变量的结构体。
typedef struct{
	people *k;
	int len;
}sqlist;

void add(sqlist *l)
{
	int i,j;
	printf("请问你要增加多少个人的信息？");
	scanf("%d",&i);
	int zhong=l->len;
	for(j=l->len;j<i+zhong;j++)
	{
		printf("请输入第%d个人的名字:",j+1);
		scanf("%s",&l->k[j].name);
		printf("请输入%s的年龄:",l->k[j].name);
		scanf("%d",&l->k[j].age);
		printf("请输入%s的性别：",l->k[j].name);
		scanf("%s",&l->k[j].nan_huo_nv);
		printf("请输入%s的自我评价（300字）：",l->k[j].name);
		scanf("%s",&l->k[j].miao_shu);
		l->len++;
	}
}

//删除
void del(sqlist *l)
{
	int i=0;
	char a[20];
	printf("请输入要删除的人员的名字:");
	scanf("%s",&a);
	int zhong=l->len;
	for(i=0;i<zhong;i++)//顺序遍历删除
	{
		if((strcmp(l->k[i].name,a))==0)//使用字符串比较函数
		{
			int j;
			for(j=i;j<l->len;j++)
			{
				strcpy(l->k[j].name,l->k[j+1].name);//字符串复制函数；
				strcpy(l->k[j].nan_huo_nv,l->k[j+1].nan_huo_nv);
				l->k[j].age=l->k[j+1].age;
				strcpy(l->k[j].miao_shu,l->k[j+1].miao_shu);
				l->len--;//减去一个元素，顺序表的长度减一
			}
		}
	}
}

//查询
void cha(sqlist *l)
{
	char a[20];
	printf("请你输入要查询的姓名:");
	scanf("%s",&a);
	int i;
	for(i=0;i<l->len;i++)
	{
		if((strcmp(l->k[i].name,a))==0)
		{
			printf("%s\n",l->k[i].name);
			printf("%d岁\n",l->k[i].age);
			printf("性别：%s\n",l->k[i].nan_huo_nv);
			printf("自我评价为:%s\n\n",l->k[i].miao_shu);
		}

	}
}

//打印看效果
void print_k(sqlist *l)
{
	int i;
	if(l->len>0)
	{
		for(i=0;i<l->len;i++)
		{
			printf("%s\n",l->k[i].name);
			printf("%d岁\n",l->k[i].age);
			printf("性别：%s\n",l->k[i].nan_huo_nv);
			printf("自我评价为:%s\n\n",l->k[i].miao_shu);
		}
	}
	else
	{
		printf("这个顺序表为空！\n");
	}
}

//修改
void gai(sqlist *l)
{
	printf("请输入您要修改的");

}

int main(void)
{
	sqlist *l;//声名了一个顺序表指针。
	l=(sqlist*)malloc(sizeof(sqlist));//为指针初始化
	l->k=(people*)malloc(sizeof(people)*1000);//动态分配内存为1000；//也就是一个足够大的数组。
	l->len=0;
	
	//在掌握了顺序表的模板和实现方法后，在此基础上有各种各样的算法，增，删，查，改，插入，和文件的读和写。
	
	//print_k(l);//增加一个打印顺序表，查看增删查改的效果的函数；


	//增加函数；
	add(l);
	print_k(l);
	//删除
	del(l);
	print_k(l);
	//查询
	cha(l);

	//修改
	gai(l);

	return 0;
}
