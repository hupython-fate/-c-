#include <stdio.h>
#include <string.h>
int main(void)
{
	//从键盘任意输入5个学生的姓名，编程找出并输出按字典顺序排在最前面的学生姓名。
	//
	char arr[5][20]={0};
	char kkk[20]="sss";
	int i,j;
	for(i=0;i<5;i++)//获取用户输入
	{
		printf("请输入第%d个名字：",i+1);
		//scanf("%s",&arr[i]);
		fgets(arr[i],20,stdin);
	}
	
	//字典排序就是按照ASCII码值排序
	for(j=0;j<4;j++)
	{
		for(i=0;i<4;i++)
		{
			if(arr[i][0]>arr[i+1][0])//大的放后面，小的放前面
			{
				strcpy(kkk,arr[i]);//kkk=arr[i];
				strcpy(arr[i],arr[i+1]);//arr[i]=arr[i+1];
				strcpy(arr[i+1],kkk);//arr[i+1]=kkk;
			}
		}
	}

	for(i=0;i<5;i++)
	{
		printf("%s\n",arr[i]);
	}
	return 0;
}
