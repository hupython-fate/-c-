#include "head.h"

void modify_name()
{
	char name[20];
	int ch,chch;
	printf("请您输入您想要修改的人的名字:");
	scanf("%s",&name);
	printf("请问您是想要全局修改，还是只修改第一个与您输入的名字相同的人的信息？\n");
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
	//接下来开始遍历
	//首先要读文件，调用之前写好的函数就好了。
	stu *he=readfile();
	stu *head=he;//虽然名字不同，但是指向的是同一个结点，以后我可能会忘记，所以在这写一条注释，以后grep一下"忘记"就行。
	stu xxx;//定义一个中间变量
	while(head!=NULL)
	{
		//要修改某个结点的信息，首先要索定这个结点，然后，再向用户询问信息。
		if((strcmp(head->name,name))==0)
		{
			printf("请输入新的名字：");
			scanf("%s",xxx.name);
			strcpy(head->name,xxx.name);
			printf("请输入新的性别(1代表男，0代表女)：");
			scanf("%d",&xxx.nan_or_nv);
			head->nan_or_nv=xxx.nan_or_nv;
			printf("请输入新的年龄：");
			scanf("%d",&xxx.age);
			head->age=xxx.age;
			int c=0;
			for(c=0;c<9;c++)
			{
				printf("请问新的%s学科的成绩是：",name[c]);//name是一个全局的数组，里面定义了科目名。
				scanf("%d",xxx.chengji[c]);
				head->chengji[c]=xxx.chengji[c];
			}//定义一个中间变量似乎有一点多此一举？
			head->sum=0;
			for(c=0;c<9;c++)
				head->sum+=head->chengji[c];
		}if(chch) break;
		head=head->next;
	}
	writefile(he,"w");
}
void modify_age()
{
	int age;
	int ch,chch;
	printf("请您输入您想要修改的人的年龄:");
	scanf("%d",&age);
	printf("请问您是想要全局修改，还是只修改第一个与您输入的年龄相同的人的信息？\n");
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


	//接下来开始遍历
	//首先要读文件，调用之前写好的函数就好了。
	stu *he=readfile();
	stu *head=he;//虽然名字不同，但是指向的是同一个结点，以后我可能会忘记，所以在这写一条注释，以后grep一下"忘记"就行。
	stu xxx;//定义一个中间变量
	while(head!=NULL)
	{
		//要修改某个结点的信息，首先要索定这个结点，然后，再向用户询问信息。
		if(head->age==age)
		{
			printf("请输入新的名字：");
			scanf("%s",xxx.name);
			strcpy(head->name,xxx.name);
			printf("请输入新的性别(1代表男，0代表女)：");
			scanf("%d",&xxx.nan_or_nv);
			head->nan_or_nv=xxx.nan_or_nv;
			printf("请输入新的年龄：");
			scanf("%d",&xxx.age);
			head->age=xxx.age;
			int c=0;
			for(c=0;c<9;c++)
			{
				printf("请问新的%s学科的成绩是：",name[c]);//name是一个全局的数组，里面定义了科目名。
				scanf("%d",xxx.chengji[c]);
				head->chengji[c]=xxx.chengji[c];
			}//定义一个中间变量似乎有一点多此一举？
			head->sum=0;
			for(c=0;c<9;c++)
				head->sum+=head->chengji[c];
		}
		if(chch) break;
		head=head->next;
	}
	writefile(he,"w");


}
void modify_sum()
{
	int sum;
	int ch,chch;
	printf("请您输入您想要修改的人的总分:");
	scanf("%d",&sum);
	printf("请问您是想要全局修改，还是只修改第一个与您输入的名字相同的人的信息？\n");
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


	//接下来开始遍历
	//首先要读文件，调用之前写好的函数就好了。
	stu *he=readfile();
	stu *head=he;//虽然名字不同，但是指向的是同一个结点，以后我可能会忘记，所以在这写一条注释，以后grep一下"忘记"就行。
	stu xxx;//定义一个中间变量
	while(head!=NULL)
	{
		//要修改某个结点的信息，首先要索定这个结点，然后，再向用户询问信息。
		if(head->sum==sum)
		{
			printf("请输入新的名字：");
			scanf("%s",xxx.name);
			strcpy(head->name,xxx.name);
			printf("请输入新的性别(1代表男，0代表女)：");
			scanf("%d",&xxx.nan_or_nv);
			head->nan_or_nv=xxx.nan_or_nv;
			printf("请输入新的年龄：");
			scanf("%d",&xxx.age);
			head->age=xxx.age;
			int c=0;
			for(c=0;c<9;c++)
			{
				printf("请问新的%s学科的成绩是：",name[c]);//name是一个全局的数组，里面定义了科目名。
				scanf("%d",xxx.chengji[c]);
				head->chengji[c]=xxx.chengji[c];
			}//定义一个中间变量似乎有一点多此一举？
			head->sum=0;
			for(c=0;c<9;c++)
				head->sum+=head->chengji[c];
		}if(chch) break;

		head=head->next;
	}
	writefile(he,"w");


}
void modify_xingbie()
{
	int xingbie;
	int ch,chch;
	printf("请您输入您想要修改的人的性别(1代表男，0代表女):");
	scanf("%d",&xingbie);
	printf("请问您是想要全局修改，还是只修改第一个与您输入的名字相同的人的信息？\n");
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


	//接下来开始遍历
	//首先要读文件，调用之前写好的函数就好了。
	stu *he=readfile();
	stu *head=he;//虽然名字不同，但是指向的是同一个结点，以后我可能会忘记，所以在这写一条注释，以后grep一下"忘记"就行。
	stu xxx;//定义一个中间变量
	while(head!=NULL)
	{
		//要修改某个结点的信息，首先要索定这个结点，然后，再向用户询问信息。
		if(head->nan_or_nv==xingbie)
		{
			printf("请输入新的名字：");
			scanf("%s",xxx.name);
			strcpy(head->name,xxx.name);
			printf("请输入新的性别(1代表男，0代表女)：");
			scanf("%d",&xxx.nan_or_nv);
			head->nan_or_nv=xxx.nan_or_nv;
			printf("请输入新的年龄：");
			scanf("%d",&xxx.age);
			head->age=xxx.age;
			int c=0;
			for(c=0;c<9;c++)
			{
				printf("请问新的%s学科的成绩是：",name[c]);//name是一个全局的数组，里面定义了科目名。
				scanf("%d",xxx.chengji[c]);
				head->chengji[c]=xxx.chengji[c];
			}//定义一个中间变量似乎有一点多此一举？
			head->sum=0;
			for(c=0;c<9;c++)
				head->sum+=head->chengji[c];
		}if(chch) break;
		head=head->next;
	}
	writefile(he,"w");
}
void modify_main()
{

		printf("\033[2J");//清屏用的。
		int cho=0;
		printf("===============================================\n");
		printf("===============欢迎来到修改界面================\n");
		printf("=                                             =\n");
		printf("=             1,按名字修改。                  =\n");
		printf("=             2,按年龄修改。                  =\n");
		printf("=             3,按总分修改。                  =\n");
		printf("=             4,按性别修改。                  =\n");
		printf("=             5,回退至主界面。                =\n");
		printf("请输入你的选择：___\b\b\b");
		scanf("%d",&cho);
		clear_input_buffer();
		switch(cho)
		{
			case 1:
				modify_name();
				modify_main();
				break;
			case 2:
				modify_age();
				modify_main();
				break;
			case 3:
				modify_sum();
				modify_main();
				break;
			case 4:
				modify_xingbie();
				modify_main();
				break;
			case 5:
				return;
				break;

			default:
				printf("您输入的选项不在选择范围内！\n");
				printf("请重新输入！\n");
				sleep(3);
				modify_main();
		}
}
