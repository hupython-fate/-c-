#include "head.h"

/*
 *新增函数放在这个文件中，其中caret()作为本文件中的主函数，主要实现新增学生的信息的功能，并且要把用户的输入转化为文件。
 *老实说，有点难度。不过我喜欢。
 * */
int a,b;//a是科目数，b是人数.
char name[Subject][30]={0};
int choice_caret=0;
char filename[50]="学生成绩数据.bat";

//这个文件的主函数
int caret_main()
{
	//printf("\033[2J");  // 清除整个屏幕
	printf("=========================欢迎来到新增界面！=========================\n");
	printf("====================================================================\n");
	printf("=                   1,查看之前的所有信息。                         =\n");
	printf("=                   2,回退至主界面。                               =\n");
	printf("=                   3,新增学生信息。                               =\n");
	printf("=                   4,按成绩高低查看所有学生信息。                 =\n");
   	printf("           ↓ 请在此输入\n");
   	printf("▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁\b\b\b\b\b\b\b\b\b\b");
   	scanf("%d",&choice_caret);
    	switch(choice_caret)
	{
		case 1:
			cha_kan();//学会了文件读的我，已经有能力写这个函数了。
			break;
		case 2:
			return 0;//直接结束这个函数的运行，而主函数就会开始循环，等同于回到主界面。
			break;
		case 3:
			stu *q=caret();//使用新增函数
			fprintf_caret(q);//把用户的输入写成文件
			break;
		case 4:
			an_cheng_print();//定义一个函数把学生信息按从高到低输出。
			break;
	}
	return 0;
}

//这可以作为新增界面函数的第一个子函数。
void input_we()//函数的定义
{
	int i;//声明第一个局部变量
	int k1;//第二个居部变量k1
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
		if(b<0)
		{
			printf("不好意思，您的输入有误，请您重新输入！\n");
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
	
								
}//第一个函数总算写完了。也不难，就是需要耐心和时间。

//本文件的第2个子函数
void input( stu *p,int i)
{
	char xuan;
	int j=0,k1=0;//声明第四个局部变量
	printf("请输入第%d个学生的姓名：",i+1);
	scanf("%s",&p->name);
	while(1)
	{
		printf("请选择第%d个学生%s的性别：\n",i+1,p->name);
		printf("a,男/man\n");
		printf("b,女/weman\n");
		printf("您的选择：");
		printf("___\b\b");
		scanf("%c",&xuan);
		switch(xuan)
		{
			case 'a':
				p->nan_or_nv=a;	
				break;
			case 'b':
				p->nan_or_nv=b;
				break;
			case 'A':
				p->nan_or_nv=a;
				break;
			case 'B':
				p->nan_or_nv=b;
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
			if(p->age>90 || p->age<0 || k1!=1)
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
			printf("请您输入第%d个学生%s的%s科目的成绩：",i+1,p->name,name[j]);
			k1=scanf("%d",&p->chengji[j]);
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

//本文件的第三个子函数
 stu *caret()//用户输入的人数和输入的科目数可以作为全局变量，没有必要传参。
{
	input_we();
	struct stu *q,*p,*head;
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


void fprintf_caret( stu *head)
{
	int i=0,j=0;
	FILE *p;
	if((p=fopen(filename,"w"))==NULL)
	{
		printf("error!!!");
		return;
	}
	head=head->next;
	fprintf(p,"\t姓名\t\t年龄\t\t性别\t\t");
	for(i=0;i<a;i++)
		fprintf(p,"%s\t",name[i]);
	fprintf(p,"\n");
	while(head!=NULL)
	{
		fprintf(p,"%10s \t %10d \t %c \t",head->name,head->age,head->nan_or_nv);
		for(j=0;j<a;j++)
			fprintf(p,"%d\t",head->chengji[j]);
		fprintf(p,"\n");
		head=head->next;
	}
}


void cha_kan()
{
	FILE *p;
	if((p=fopen(filename,"r"))==NULL)
	{
		printf("error!!");
		exit(0);//等价于return 0;
	}
	char ch;
	while(!feof(p))//到文件末尾会返回1,也就是说。这个操作能输出文件的全部内容。
	{
		ch=fgetc(p);//字符读
		printf("%c",ch);
	}
}

void an_cheng_print()
{
	stu *head;
	head=readfile();
	printlist(head);
}

stu *readfile()
{
	int i;
	char **q=(char **)malloc(sizeof(char*)*4);//创建一个字符串数组。
						  //之后还得为这个指针数组里的每一个指针分配内存
	for(i=0;i<4;i++)
		q[i]=(char *)malloc(sizeof(char)*20);//这是在分配每一行的大小。
	//上面这几句，就是相当于char name[4][20];
	//这样做的好处是动态改变数组的大小，而不是静态固定。

	//首先要读文件，可以创建一个顺序表，把文件内容读入顺序表，然后在对顺序表进行排序，最后输出到终端。
	FILE *p;
	if((p=fopen(filename,"r"))==NULL)
	{
		printf("error!!");
		exit(0);
	}
	fscanf(p,"%s %s %s %s",q[0],q[1],q[2],q[3]);
	stu *p0,*p1,*p2;//创建设一个链表，用来存储文件的数据
	i=0;
	int j=0;
	while(!feof(p))
	{
		if(i==0)
		{
			if((p0=(stu*)malloc(sizeof(stu)))==NULL)
			{
				printf("error!!");
				return 0;
			}
			fscanf(p,"%s %d %c",p0->name,&p0->age,&p0->nan_or_nv);
			for(j=0;j<9;j++)
			{
				fscanf(p,"%f",&p0->chengji[j]);
			}
			p2=p0;
		}
		else 
		{
			if((p1=(stu*)malloc(sizeof(stu)))==NULL)
			{
				printf("error!");
				return 0;
			}
			fscanf(p,"%s %d %c",p0->name,&p0->age,&p0->nan_or_nv);
			for(j=0;j<9;j++)
			{
				fscanf(p,"%f",&p0->chengji[j]);
			}
			p2->next=p1;
			p2=p1;
		}
	}

	//用链表读取文件的部分就算写好了，但是不知道有没有读取成功，最好的验证方法是把这个链表打印出来。	
	return p0;
}

void printlist(stu *head)
{
	int i;
	printf("%s %c %d",head->name,head->nan_or_nv,head->age);
	for(i=0;i<9;i++)
		printf(" %d ",head->chengji[i]);
	printf("\n");

}
