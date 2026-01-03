#include "head.h"

//读文件可以复用在caret.c中的readfile()函数，接下来只需要写一个删除的函数和一个删除界面就可以了。
//果然，函数是代码复用的最好形式

void del_name()
{
	//跟据名字来进行删除的函数，万一有重名呢？
	//所以要让用户进行选择，是全局删除，还是只删除第一个和这个名字相同的。
	char name[20];
	int ch,chch;
	printf("请您输入您想要删除的人的名字:");
	scanf("%s",&name);
	printf("请问您是想要全局删除，还是只删除第一个与您输入的名字相同的人的信息？\n");
	printf("1,全局。\n");
	printf("2,首个。\n");
	printf("____\b\b\b");
	scanf("%d",&ch);
	clear_input_buffer();//清空缓冲区。
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
	stu *head=he;
	while(head->next->next!=NULL)
	{
		if((strcmp(head->next->name,name))==0)//如果下一个结点是要删除的结点，那么就把现在这个结点的指针域修改成下下个结点的地址。
		{
			//也就是说。
			head->next=head->next->next;//没错，这就是高效利用指针和链表的方式啊，哈哈哈
						    //这样，中间的结点就会失联。
						    //等同于被删除了。
			if(chch) break;
		}
		head=head->next;
	}
	//把匹配的结点删除后，一定要把它重新覆盖回文件中，用w的方式。
	writefile(he,"w");
}

void del_age()
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
	clear_input_buffer();//清空缓冲区。
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
	stu *head=he;
	while(head->next->next!=NULL)
	{
		if(head->next->age==age)//如果下一个结点是要删除的结点，那么就把现在这个结点的指针域修改成下下个结点的地址。
		{
			//也就是说。
			head->next=head->next->next;//没错，这就是高效利用指针和链表的方式啊，哈哈哈
						    //这样，中间的结点就会失联。
						    //等同于被删除了。
			if(chch) break;
		}
		head=head->next;
	}
	//把匹配的结点删除后，一定要把它重新覆盖回文件中，用w的方式。
	writefile(he,"w");
}


void del_xingbie()
{	
	int xingbie;
	int ch,chch;
	printf("请您输入您想要删除的人的性别（1为男，0为女）:");
	scanf("%d",&xingbie);
	printf("请问您是想要全局删除，还是只删除第一个与您输入的性别相同的人的信息？\n");
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
	stu *head=he;
	while(head->next->next!=NULL)
	{
		if(head->next->nan_or_nv==xingbie)//如果下一个结点是要删除的结点，那么就把现在这个结点的指针域修改成下下个结点的地址。
		{
			//也就是说。
			head->next=head->next->next;//没错，这就是高效利用指针和链表的方式啊，哈哈哈
						    //这样，中间的结点就会失联。
						    //等同于被删除了。
			if(chch) break;
		}
		head=head->next;
	}
	//把匹配的结点删除后，一定要把它重新覆盖回文件中，用w的方式。
	writefile(he,"w");
}

void del_sum()
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


	//接下来开始遍历
	//首先要读文件，调用之前写好的函数就好了。
	stu *he=readfile();
	stu *head=he;
	while(head->next->next!=NULL)
	{
		if(head->next->sum==sum)//如果下一个结点是要删除的结点，那么就把现在这个结点的指针域修改成下下个结点的地址。
		{
			//也就是说。
			head->next=head->next->next;//没错，这就是高效利用指针和链表的方式啊，哈哈哈
						    //这样，中间的结点就会失联。
						    //等同于被删除了。
			if(chch) break;
		}
		head=head->next;
	}
	//把匹配的结点删除后，一定要把它重新覆盖回文件中，用w的方式。
	writefile(he,"w");
}

void del_main()
{
	int choice=0;
		printf("\033[2J");//清屏用的。
		printf("=====================================================\n");
		printf("===================欢迎来到删除界面！================\n");
		printf("=           	                          	     =\n");
		printf("=          	 1,根据名字删除。                    =\n");
		printf("=         	 2,根据年龄删除。          	     =\n");
		printf("=          	 3,根据性别删除。         	     =\n");
		printf("=          	 4,根据总分删除。         	     =\n");
		printf("=           	 5,回退至主界面。         	     =\n");
		printf("请输入你的选择：__\b\b");
		scanf("%d",&choice);
		clear_input_buffer();
		switch(choice)
		{
			case 1:
				del_name();
				del_main();//递归调用
				break;
			case 2:
				del_age();
				del_main();
				break;
			case 3:
				del_xingbie();
				del_main();
				break;
			case 4:
				del_sum();
				del_main();
				break;
			case 5:
				return;
				break;
			default:
				printf("您输入的选项不在选择范围内！\n");
				printf("请重新输入！\n");
				sleep(3);
				del_main();
		}
}

//啊勒？写完这个文件竟然只用了几分钟？因为最难的已经被攻克了吗？哈哈哈。
