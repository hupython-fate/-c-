#include "head.h"

/*
 *新增函数放在这个文件中，其中caret_main()作为本文件中的主函数，主要实现新增学生的信息的功能，并且要把用户的输入转化为文件。
 *老实说，有点难度。不过我喜欢。
 */

//全局变量区。
int b;//b是人数.
char name[Subject][30]={"语文","数学","英语","政治","地理","历史","物理","化学","生物"};
int choice_caret=0;
char filename[50]="学生成绩数据.bat";
int size=0;//用于记录从硬盘读文件时的链表的长度的变量

//第一个功能。
void cha_kan()//这个函数会把文件的所有内容都打印出来。
{
	FILE *p;
	if((p=fopen(filename,"r"))==NULL)
	{
		printf("error!!");
		exit(0);//等价于return 0;
	}
	rewind(p);//把文件指针移到最开头。
	char ch[1000];
	if((fgets(ch,1000,p))==NULL)
	{
		printf("此文件内容为空，可通过新增功能来为文件增加内容。\n");
	}
	else
	{
		while((fgets(ch,1000,p))!=NULL)//到文件末尾会返回1,也就是说。这个操作能输出文件的全部内容。
			printf("%s",ch);
		printf("此文件内容已经被读完，如果为空，那说名文件里没有内容。\n");
	}
	sleep(5);//停止5秒让用户看清内容。
}

//第三个功能的一部分
void input_we()//函数的定义
{
	int k1;
	char ch;
	while(1)
	{
		printf("请问您要输入多少个人的成绩？（问人数）：");
		k1=scanf("%d",&b);
		clear_input_buffer();//清空缓冲区。
		if(b<0)
		{
			printf("不好意思，您的输入有误，请您重新输入！\n");
			continue;
		}
		else if(b>1000)
		{
			printf("您确定输这么多吗？虽然本程序能承受得住，但是输这么多会手酸吧！(y/n)");
			scanf("%c",&ch);
			clear_input_buffer();//清空缓冲区。
			if (ch=='y') break;
			else continue;
		}
		if(k1!=1)
		{
			printf("不好意思，请不要调皮，请输入数字而不是其它，比如按了ctrl + d，或者是输入了abc之类的。\n");
			printf("总而言之，请您重新输入！\n");
			continue;
		}
		break;
	}			
}
//第三个功能的另一部分
void input( stu *p,int i)
{
	char xuan;
	int j=0,k1=0;//声明第四个局部变量
	printf("请输入第%d个学生的姓名：",i+1);
	scanf("%s",p->name);
	clear_input_buffer();//清空缓冲区。
	while(1)
	{
		printf("请选择第%d个学生%s的性别：\n",i+1,p->name);
		printf("a,男/man\n");
		printf("b,女/weman\n");
		printf("您的选择：");
		printf("___\b\b");
		scanf("%c",&xuan);
		clear_input_buffer();//清空缓冲区。
		switch(xuan)
		{
			case 'a':
				p->nan_or_nv=1;	
				break;
			case 'b':
				p->nan_or_nv=0;
				break;
			case 'A':
				p->nan_or_nv=1;
				break;
			case 'B':
				p->nan_or_nv=0;
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
			printf("请输入第%d个学生%s的年龄：",i+1,p->name);
			k1=scanf("%d",&p->age);
			clear_input_buffer();//清空缓冲区。
			if(p->age>80 || p->age<9 || k1!=1)
			{
				printf("请不要乱输数据！\n");
				printf("请重新输入！\n");
				continue;
			}
			break;
	}

	//最后是学生的各个科目的成绩
	for(j=0;j<9;j++)//a是声明在头文件中的全局变量，储存的是科目的数量
	{
		while(1)
		{
			printf("请您输入第%d个学生%s的%s科目的成绩：",i+1,p->name,name[j]);
			k1=scanf("%d",&p->chengji[j]);
			clear_input_buffer();//清空缓冲区。
			if(k1!=1 || p->chengji[j]>100 || p->chengji[j]<0)
			{
				printf("分值为百分制！\n");
				printf("请不要乱输数据！\n");
				printf("请重新输入！\n");
				continue;
			}
			break;
		}
	}
}

//第三个功能的主要部分之一。
stu *caret()//用户输入的人数和输入的科目数可以作为全局变量，没有必要传参。
{
	input_we();
	stu *q,*p,*head;
	int i;
	if((head=(stu*)malloc(sizeof( stu)))==NULL)
	{
			printf("error!!");
			return 0;
	}
	head->next=NULL;
	q=head;
	for(i=0;i<b;i++)//b是人数
	{
		if((p=(stu *)malloc(sizeof(stu)))==NULL)
		{
			printf("error!!!");
			return 0;
		}
		//思考一下，怎么充分利用之前写的函数
		//很明显,环迎界面只需要出现一次就行了，而要询问每一个学生的信息的部分得出现多次，之前我是用数组存数据，现在要改用链表了。
		//最干净利落的方法就是重写。
		input(p,i);
		q->next=p;
		q=p;
	}
	p->next=NULL;
	return head;
}


//还是第四个功能的，负责排序
void pai_xu(stu *head)//使用冒泡排序？有没有比冒泡排序更好的算法？
		      //有，插入算法。
{//对链表使用冒泡排序有两种方式，一种是改变结点与结点之间的联接关系，还有一种是不改变结点之间的关系，改变结点的数据。很明显，前者比后者高效。
	int i,j;
	int zhong;
	int kkk=0;
	stu *zh=head;
	//要根据每个人的总分进行链表的排序。
	//链表的排序吗？
	//先用冒泡排序实现吧	
	stu k;//还需要一个中间的结构体变量，用来交换。
	for(i=0;i<size-1;i++)//不行啊，链表不是数组，不支持随机访问啊//用两个变量不就得了？哈哈//随然不支持随机访问，但是支持通过指针和箭头运算符层层访问啊。
	{
		zh=head;
		for(j=0;j<size-i;j++)
		{
			if(zh->sum  <  zh->next->sum)//比较前一个结点的数据和后一个结点的数据
			{
				strcpy(k.name,zh->next->name);//交换名字
				strcpy(zh->next->name,zh->name);
				strcpy(zh->name,k.name);
				
				k.age=zh->next->age;//交换年龄
				zh->next->age=zh->age;
				zh->age=k.age;

				k.nan_or_nv=zh->next->nan_or_nv;
				zh->next->nan_or_nv=zh->nan_or_nv;
				zh->nan_or_nv=k.nan_or_nv;

				int z=0;
				for(z=0;z<9;z++)//交换9门成绩
				{
					k.chengji[z]=zh->next->chengji[z];
					zh->next->chengji[z]=zh->chengji[z];
					zh->chengji[z]=k.chengji[z];
				}
				
				k.sum=zh->next->sum;//最后交换总分
				zh->next->sum=zh->sum;
				zh->sum=k.sum;
			}
			zh=zh->next;//移动到下一个结点
			if(zh->next==NULL) break;
		}
	}
	//写到这似乎没有什么问题，恩，试一下就知道了。
}

//第四个功能的输出函数，负责把读取到并排序好的内容输出到终端里。
void printlist(stu *head)//读取成功了，接下来进行排序，然后再打印出来就可以了。
{
	int i;
	while(head!=NULL)
	{
		printf("%s,%d,%d",head->name,head->age,head->nan_or_nv);
		for(i=0;i<9;i++)
			printf(",%d",head->chengji[i]);
		printf(",%d",head->sum);
		printf("\n");
		head=head->next;
	}
}

//第四个功能的主调函数，把前三个子函数集中起来调用。
void an_cheng_print()
{
	stu *he;
	he=readfile();
	pai_xu(he);
	printlist(he);
}

//这个文件的主函数
int caret_main()
{
	printf("\033[2J");  // 清除整个屏幕
	printf("=========================欢迎来到新增界面！=========================\n");
	printf("=                                                                  =\n");
	printf("=                   1,查看之前的所有信息。                         =\n");
	printf("=                   2,回退至主界面。                               =\n");
	printf("=                   3,新增学生信息。                               =\n");
	printf("=                   4,按成绩高低查看所有学生信息。                 =\n");
   	printf("↓ 请在此输入\n");
   	printf("▁▁▁▁▁▁▁▁▁▁▁▁▁\b\b\b\b\b\b\b\b\b\b");
   	scanf("%d",&choice_caret);
	clear_input_buffer();
    	switch(choice_caret)
	{
		case 1:
			cha_kan();//学会了文件读的我，已经有能力写这个函数了。
			//查看完成后，还要继续留在新增界面，恩，递归调用这个函数？
			//可行吗？会不会导致死递归？
			//不会吧，有2这个选项。
			caret_main();//递归调用
			break;
		case 2:
			return 0;//直接结束这个函数的运行，而主函数就会开始循环，等同于回到主界面。
			break;
		case 3:
			stu *q=caret();//使用新增函数
			writefile(q,"a");//把用户的输入写成文件
			caret_main();
			break;
		case 4:
			an_cheng_print();//定义一个函数把学生信息按从高到低输出。
			caret_main();
			break;
		default://难道这里的关键字可以自己任意填吗？不可以。
			printf("您输入的数不在选项之内。！！\n");
			printf("请重新输入！\n");
			sleep(3);
			caret_main();//递归调用，等同于循环。
	}
	return 0;
}
//
//
//以上就是作为新增界面的所有函数。
//这个项目最难的就是链表的各种算法和文件读写。解决了这两点，这个项目就没有什么难度了。
//
//
//
//哈哈哈，成功了，终于成功了！！链表的冒泡排序。
//
//这个子模块终于写完了，哈哈哈！

