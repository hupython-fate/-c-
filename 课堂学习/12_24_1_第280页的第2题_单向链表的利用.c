#include <stdio.h>
#include <stdlib.h>
struct stu
{
	/*int ID;
	int math;
	int english;*/
	float student[3];//0是id，1是math，2是english
	struct stu *next;
};
struct stu *inputlist()
{
	int i=0;
	struct stu *p,*q,*head;
	head=(struct stu *)malloc(sizeof(struct stu));//创建第一个结点
	if(head==NULL)
	{
		printf("error!");
		return 0;
	}
	head->next=NULL;
	p=head;
	for(i=0;i<5;i++)
	{
		q=(struct stu *)malloc(sizeof(struct stu));//创建新的结点
		printf("请输入第%d个学生的ID：",i+1);
		scanf("%f",&q->student[0]);//获取id
		printf("请输入第%d个学生的数学成绩：",i+1);
		scanf("%f",&q->student[1]);//
		printf("请输入第%d个学生的英语成绩：",i+1);
		scanf("%f",&q->student[2]);
		p->next=q;
		p=q;
	}
	q->next=NULL;
	return head;
}

void print100(struct stu *p)
{
	//利用head指针遍历，找出有一百分的学生。
	p=p->next;

	while(p!=NULL)
	{
		int i;
		for(i=1;i<3;i++)
		{
			if(p->student[i]>=100)
			{
				printf("ID:%3.0f   MATH:%3.0f   ENGLISH:%3.0f\n",p->student[0],p->student[1],p->student[2]);
				break;//跳出这个for循环。这样就可以避免重复打印。
			}
		}
		p=p->next;//指针后移。
	}
}

void pingjun(struct stu *p)
{
	p=p->next;
	float math=0,english=0;
	while(p!=NULL)
	{
		math+=p->student[1];
		english+=p->student[2];
		p=p->next;
	}
	printf("数学的总平均分是%.2f，英语的总平均分是%.2f.",math/5,english/5);
}

int main(void)
{
	struct stu *qq;
	qq=inputlist();
	print100(qq);
	pingjun(qq);
	return 0;
}
