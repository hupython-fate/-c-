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
			}
			l->len--;//减去一个元素，顺序表的长度减一
		break;//加上这一行就是只删除第一个条件满足的，注释掉就是全部条件满足的删除。
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
	people a;
	int i=0;
	char name[20];
	printf("请输入您要修改的人员的名字：");
	scanf("%s",name);
	printf("请输入新的年龄：");
	scanf("%d",&a.age);
	printf("请输入新的性别：");
	scanf("%s",a.nan_huo_nv);//数组名不用加&
	printf("请输入新的自我评价：");
	scanf("%s",a.miao_shu);//也是一个数组名
	printf("请输入新的名字（不想修改请输入q）：");
	scanf("%s",a.name);
	int zhong=l->len;
	for(i=0;i<zhong;i++)
	{
		if((strcmp(l->k[i].name,name))==0)
		{
			strcpy(l->k[i].name,a.name);
			strcpy(l->k[i].miao_shu,a.miao_shu);
			strcpy(l->k[i].nan_huo_nv,a.nan_huo_nv);
			l->k[i].age=a.age;
			break;
		}
	}//因为是修改，所以顺序表长度不增也不减。

}

void insert(sqlist *l)
{
	//insert有很多种方式，插入到某个人之前，或者插入到第几位。
	//插入到最后面和最前面是最方便的。
	//按名字插入吧
	int i,j;
	char name[20];
	char ch;
	printf("请问你想插入在那一个人之前或者之后？\n");
	printf("请输入那个人的名字:");
	scanf("%s",name);
	printf("请问你想插入在%s之前还是之后？\n",name);
	printf("a,之前。\n");
	printf("b,之后。\n");
	printf("__\b\b");
	scanf("%c",&ch);
	int zhong=l->len;
	switch(ch)
	{
		case 'a':
			goto INSERT1;
			break;
		case 'b':
			goto INSERT2;
			break;
		case 'A':
			goto INSERT1;
			break;
		case 'B':
			goto INSERT2;
			break;
	}
	INSERT1://在之前插入
	{
		for(i=0;i<zhong;i++)
		{
			if((strcmp(l->k[i].name,name))==0)//先后移，把要插入的位置空出来。
				for(j=i;j<zhong;j++)
				{
					strcpy(l->k[j+1].name,l->k[j].name);//把前一位的赋给后一位
					strcpy(l->k[j+1].nan_huo_nv,l->k[j].nan_huo_nv);
					strcpy(l->k[j+1].miao_shu,l->k[j].miao_shu);
					l->k[j+1].age=l->k[j].age;
				}
			//空出位置之后，就可以在这个位置方新的信息了
			goto ask;
			break;//只要空出一个位置来就行。
		}
	}
	INSERT2://在之后插入
	{
		for(i=0;i<zhong;i++)
		{
			if((strcmp(l->k[i].name,name))==0)                            
				for(j=i;j<zhong-1;j++)//要空出位置来，1 2 3 4
				{
					strcpy(l->k[j+2].name,l->k[j+1].name);
					strcpy(l->k[j+2].nan_huo_nv,l->k[j+1].nan_huo_nv);
					strcpy(l->k[j+2].miao_shu,l->k[j+1].miao_shu);
					l->k[j+2].age=l->k[j+1].age;
				}
			goto ask;
			break;
		}
	}
	ask://询问用户的信息，把用户输入的信息插入其中。
	{
		printf("请问这个人的名字：");
		scanf("%s",l->k[i].name);
		printf("请问这个人的性别：");
		scanf("%s",l->k[i].nan_huo_nv);
		printf("请问这个人的年龄：");
		scanf("%d",&l->k[i].age);
		printf("请输入这个人的自我评价：");
		scanf("%s",l->k[i].miao_shu);
	}
	l->len++;
	return;
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
	//print_k(l);
	//修改
	gai(l);
	print_k(l);
	//还缺一个插入和一个文件读写的函数，让数据持久化。
	//插入
	insert(l);
	print_k(l);
	return 0;
}
