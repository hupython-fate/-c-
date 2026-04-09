#include <stdio.h>

int main(void)
{
	char arr[100],arr2[100];
	int m=0;
	FILE *p;
	p=fopen("test.txt","w");
	printf("请输入一串字符串：");
	fgets(arr,sizeof(arr),stdin);
	fputs(arr,p);//文件写
	fclose(p);

	FILE *qq;
	qq=fopen("test.txt","r");
	/*fgets(arr2,sizeof(arr2),qq);//文件读
		
	while(arr[m]!='b')
	{
		//printf("%c",arr2[m]);
		m++;
	}
	printf("%d",m);

	//这一题的本质是考验随机读写文件的能力。
	//可以在求出b的位置后,利用随机定位函数来读取单词
	//可以用空隔为结束标志。*/
	//已知21是文件位置到。
	
	fseek(qq,21L,0);//移动文件指针的位置，

	fgets(arr2,10,qq);//读取

	printf("%s",arr2);//打印
	

	return 0;
}
