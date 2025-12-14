#include <stdio.h>



void input(int x[],int h)//用数组名作为函数的参数
{
	if(h==0) return;
	input(x,h-1);
	printf("请输入第%d个学生的成绩：",h);
	scanf("%d",&x[h-1]);
	return;
}

int student_sum(int x[],int h)//用递归求一个数组里的总和。
{
	int kkk;
	if(h==0) return 0;
	return x[h-1]+student_sum(x,h-1);
	//假设h=2
	//第一次递，x[2-1]+student_sum(x,2-1)=x[1]+student_sum(x,1)
	//第二次递，student_sum(x,1)=x[0]+stdent_sum(x,0)
	//因为h==0,执行return
	//student_sum(x,0)=0
	//开始归，
	//即，x[1]+x[0]+0
//函数在递的过程中需要return，但是在归的过程中不需要。
}

void student_max_min(int x[],int h)
{
	int i,j;
	int xxx;
	for(i=0;i<=h-1;i++)
	{
		for(j=0;j<h-1;j++)
		{
			if(x[j]>x[j+1])//小的放前面
			{
				xxx=x[j];
				x[j]=x[j+1];
				x[j+1]=xxx;
			}

		}

	}
	//冒泡排序完成，然后，最小值就是下标为0的元素，最大的就是下标为h-1的元素。
	printf("最大值是%d，最小值是%d\n",x[h-1],x[0]);
}

int main(void)
{
	int xx;
	int student[100];
	int sum;
	printf("请问您要输入几个学生的成绩？");
	scanf("%d",&xx);
	input(student,xx);//用于输入学生成绩的函数。
	sum=student_sum(student,xx);
	printf("平均成绩是%d\n",sum/xx);
	student_max_min(student,xx);
	return 0;
}
