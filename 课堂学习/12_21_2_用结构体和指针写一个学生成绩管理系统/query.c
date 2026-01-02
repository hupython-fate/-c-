#include "head.h"

void query_name()
{
	char name[20];
	int ch,chch;
	printf("请您输入您想要查询的人的名字:");
	scanf("%s",&name);
	printf("请问您是想要全局查询，还是只查询第一个与您输入的名字相同的人的信息？\n");
	printf("1,全局。\n");
	printf("2,首个。\n");
	printf("____\b\b\b");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			chch=0;
			break;
		case 2:
			chch=1;
			break;
	}

	//查询只需要读文件就行了，不需要写文件
	stu *head=readfile();
	while(head!=NULL)
	{
		if((strcmp(head->name,name))==0)
		{
			printf("姓名：%s\n",head->name);
			printf("性别：%d\n",head->nan_or_nv);
			printf("年龄：%d\n",head->age);
			int i=0;
			for(i=0;i<9;i++)
			{
				printf("%s科目的成绩是：%d\n",name[i],head->chengji[i]);
			}
		}
		else
			printf("您要查询的人不存在。\n");
		if(chch) break;
		head=head->next;
	}
	
}
void query_age()
{
	int age;
	int ch,chch;
	printf("请您输入您想要删除的人的年龄:");
	scanf("%d",&age);
	printf("请问您是想要全局删除，还是只删除第一个与您输入的年龄相同的人的信息？\n");
	printf("1,全局。\n");
	printf("2,首个。\n");
	printf("____\b\b\b");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			chch=0;
			break;
		case 2:
			chch=1;
			break;
	}	

	stu *head=readfile();
	while(head!=NULL)
	{
		if(head->age==age)
		{
			printf("姓名：%s\n",head->name);
			printf("性别：%d\n",head->nan_or_nv);
			printf("年龄：%d\n",head->age);
			int i=0;
			for(i=0;i<9;i++)
			{
				printf("%s科目的成绩是：%d\n",name[i],head->chengji[i]);
			}
		}	else
			printf("您要查询的人不存在。\n");

		if(chch) break;
		head=head->next;
	}

}
void query_xingbie()
{
	int xingbie;
	int ch,chch;
	printf("请您输入您想要删除的人的性别（1代表男，0代表女）：");
	scanf("%d",&xingbie);
	printf("请问您是想要全局删除，还是只删除第一个与您输入的名字相同的人的信息？\n");
	printf("1,全局。\n");
	printf("2,首个。\n");
	printf("____\b\b\b");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			chch=0;
			break;
		case 2:
			chch=1;
			break;
	}	

	stu *head=readfile();
	while(head!=NULL)
	{
		if(head->nan_or_nv==xingbie)
		{
			printf("姓名：%s\n",head->name);
			printf("性别：%d\n",head->nan_or_nv);
			printf("年龄：%d\n",head->age);
			int i=0;
			for(i=0;i<9;i++)
			{
				printf("%s科目的成绩是：%d\n",name[i],head->chengji[i]);
			}
		}	else
			printf("您要查询的人不存在。\n");

		if(chch) break;
		head=head->next;
	}

}
void query_sum()
{
	int sum;
	int ch,chch;
	printf("请您输入您想要删除的人的总分:");
	scanf("%d",&sum);
	printf("请问您是想要全局删除，还是只删除第一个与您输入的总分相同的人的信息？\n");
	printf("1,全局。\n");
	printf("2,首个。\n");
	printf("____\b\b\b");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			chch=0;
			break;
		case 2:
			chch=1;
			break;
	}	

	stu *head=readfile();
	while(head!=NULL)
	{
		if(head->sum==sum)
		{
			printf("姓名：%s\n",head->name);
			printf("性别：%d\n",head->nan_or_nv);
			printf("年龄：%d\n",head->age);
			int i=0;
			for(i=0;i<9;i++)
			{
				printf("%s科目的成绩是：%d\n",name[i],head->chengji[i]);
			}
		}	else
			printf("您要查询的人不存在。\n");

		if(chch) break;
		head=head->next;
	}

}

void query_main()
{
	int choice=0;
	while(1)
	{
		printf("==============================================\n");
		printf("=================欢迎来到查询界面=============\n");
		printf("=                                            =\n");
		printf("=              1,按名字查询。                =\n");
		printf("=              2,按年龄查询。                =\n");
		printf("=              3,按性别查询。                =\n");
		printf("=              4,按总分查询。                =\n");
		printf("=              5,回退至主界面。              =\n");
		printf("____\b\b\b");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				query_name();
				query_main();
				break;
			case 2:
				query_age();
				query_main();
				break;
			case 3:
				query_xingbie();
				query_main();
				break;
			case 4:
				query_sum();
				query_main();
				break;
			case 5:
				return;
				break;
		}
	}
}
