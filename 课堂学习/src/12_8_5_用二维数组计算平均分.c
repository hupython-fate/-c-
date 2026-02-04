#include <stdio.h>
int main(void)
{
	int arr[3][6],i,j,h=0,k=0,z=0;
	int x1=0,x2=0,x3=0,x4=0,x5=0,x6=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<6;j++)
		{
			h++;
			if(h<=6)
			{
				k++;
				printf("请输入第%d个人的语文成绩：",k);
				scanf("%d",&arr[i][j]);
			}
			else if(h>6 && h<=12)
			{
				if(h==7) k=0;
				k++;
				printf("请输入第%d个人的数学成绩：",k);
				scanf("%d",&arr[i][j]);
			}
			else if(h>12 && h<=18)
			{
				if(h==13) k=0;
				k++;
				printf("请输入第%d个人的英语成绩：",k);
				scanf("%d",&arr[i][j]);
			}
			
		}
	}
	//打印一下看一下效果
	for(i=0;i<3;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}



	//接下来就是计算平均分，每一行的平均分和每一列的平均分。
	//只需要用一个累加器，加一个循环，再除一下就可以了。
	h=0;
	k=0;
	z=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<6;j++)
		{
			if(i==0)
			{
				h+=arr[i][j];//h的值就是第一行的值。也就是语文成绩的总和。
			}
			else if(i==1)
			{
				k+=arr[i][j];//数学总成绩
			}
			else if(i==2)
			{
				z+=arr[i][j];//英语总成绩
			}
		}
		x1+=arr[i][0];//第一个人
		x2+=arr[i][1];
		x3+=arr[i][2];
		x4+=arr[i][3];
		x5+=arr[i][4];
		x6+=arr[i][5];//最后一个人

	}
	printf("语文平均成绩为%d\n",h/6);
	printf("数学平均成绩为%d\n",k/6);
	printf("英语平均成绩为%d\n",z/6);
	printf("第一人平均成绩为%d\n",x1/3);
	printf("第二人平均成绩为%d\n",x2/3);
	printf("第三人平均成绩为%d\n",x3/3);
	printf("第四人平均成绩为%d\n",x4/3);
	printf("第五人平均成绩为%d\n",x5/3);
	printf("第六人平均成绩为%d\n",x6/3);

	return 0;
}
