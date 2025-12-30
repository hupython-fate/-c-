#include <stdio.h>

typedef struct{
	int age;
	char nan_huo_nv[4];
	char name[20];
	char fase[4];
	char eyes[20];
	char miao_shu[1024];
}people;


//定义一个成员为一维数组和int类型变量的结构体。
typedef struct{
	people *k;
	int len;
}sqlist;

void add(sqlist l)
{
	int i,j;
	printf("请问你要增加多少个人的信息？");
	scanf("%d",&i);
	for(j=l.len;j<i+l.len;j++)
	{
		printf("请输入第%d个人的名字:",j+1);
		scanf("%s",&l.k[j]->name);
		printf("请输入%s的年龄:",l.k[j]->name);
		scanf("%d",&l.k[j]->age);
		printf("请输入%s的性别：",l.k[j]->name);
		scanf("%d",&l.k[j]->nan_huo_nv);
		printf();
	}
}

int main(void)
{
	sqlist l;//声名了一个顺序表。
	l.k=(people *)malloc(sizeof(people)*1000);//动态分配内存为1000；//也就是一个足够大的数组。
	l.len=0;
	
	//在掌握了顺序表的模板和实现方法后，在此基础上有各种各样的算法，增，删，查，改，插入，和文件的读和写。
	
	//增加函数；
	add();

	return 0;
}
