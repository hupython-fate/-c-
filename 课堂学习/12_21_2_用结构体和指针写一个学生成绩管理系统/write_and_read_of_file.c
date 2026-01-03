#include "head.h"

//把处理文件io的两个函数单独立放在一个文件里，恩，这是为了突出这两个函数的重要性和方便修改。


//第三个功能的主要部分之2.
void writefile(stu *head,char *mmm)//把链表中的数据写入文件中，这是很重要的环节，我用","号来分隔不同的数据，方便读取。
{
	int j=0;
	FILE *p;
	if((p=fopen(filename,mmm))==NULL)//有了"学生成绩数据.bat"这个文件后，要把w改成a
	{
		printf("error!!!");
		return;
	}
	head=head->next;
	/*fprintf(p,"姓名,年龄,性别");//有了"学生成绩数据.bat"这个文件后，就可以把这一段注释掉。
	for(j=0;j<9;j++)
		fprintf(p,",%s",name[j]);//打印科目名
	fprintf(p,"\n");*/
	head->sum=0;
	while(head!=NULL)
	{
		fprintf(p,"%s,%d,%d",head->name,head->age,head->nan_or_nv);
		for(j=0;j<9;j++)
			fprintf(p,",%d",head->chengji[j]);
		for(j=0;j<9;j++)
			head->sum+=head->chengji[j];
		fprintf(p,",%d",head->sum);
		fprintf(p,"\n");
		head=head->next;
	}
	fclose(p);
}


//第四个功能的重要函数。
stu *readfile()//这个文件中最重要的函数，没有有之一。
{
	//首先要读文件，可以创建一个顺序表，把文件内容读入顺序表，然后在对顺序表进行排序，最后输出到终端。
	//printf("bbbb\n");
	FILE *p;
	int i=0;
	if((p=fopen(filename,"r"))==NULL)
	{
		printf("error!!");
		exit(0);
	}
	char buff[90];//刚才的问题就出现在这，现在没有问题了。
	fgets(buff,90,p);//读取标题行。
	char data_node[40];
	stu *p0=NULL,*p1=NULL,*p2=NULL;//创建设一个链表，用来存储文件的数据
	while(fgets(data_node,40,p)!=NULL)//读取一行
	{
		if((p0=(stu*)malloc(sizeof(stu)))==NULL)
		{
			printf("error!!");
			return 0;
		}
		sscanf(data_node, 
    		"%49[^,],%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
    	p0->name,
    	&p0->age,
    	&p0->nan_or_nv,
    	&p0->chengji[0],
    	&p0->chengji[1],
    	&p0->chengji[2],
    	&p0->chengji[3],
    	&p0->chengji[4],
    	&p0->chengji[5],
 	&p0->chengji[6],
    	&p0->chengji[7],
    	&p0->chengji[8],
	&p0->sum);//使用sscanf();直接把字符串写入结构体；
	
		if(i==0)
		{
			p2=p0;	//把p2指向第一个结点；//只执行一次
			p1=p0;//p1是指向第一个结点的指针。
		}
		else if(i>0)
		{
			p2->next=p0;//把第二个结点的地址放入第一个结点的指针域。//执行很多次
			p2=p0;//很关键
		}
		i++;
		size++;//储存读文件时链表的长度。
	}
	p0->next=NULL;
	fclose(p);
	//用链表读取文件的部分就算写好了，但是不知道有没有读取成功，最好的验证方法是把这个链表打印出来。	
	return p1;
}

