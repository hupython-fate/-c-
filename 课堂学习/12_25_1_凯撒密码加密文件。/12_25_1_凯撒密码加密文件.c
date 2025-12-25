#include <stdio.h>
#include <string.h>
#define guizhe 4

void caret_File()
{
	FILE *p;
	char str[100];
	if((p=fopen("text.txt","w"))==NULL)
		printf("error!!");
	puts("请输入一句话：");
	fgets(str,sizeof(str),stdin);
	fputs(str,p);//文件写。
	if((fclose(p))!=0)
		printf("error!!");
}

void jiami()
{
	char str2[100];
	FILE *p;
	if((p=fopen("text.txt","r"))==NULL)
		printf("error!!!");
	fgets(str2,sizeof(str2),p);//文件读
	//进行凯撒加密
	int k=strlen(str2);
	int i;
	for(i=0;i<k;i++)
	{
		str2[i]+=guizhe;
	}
	FILE *p1;
	if((p1=fopen("jiamihou.txt","w"))==NULL)
		printf("error!!!");
	//把加密后的字符串写入新的文件中
	fputs(str2,p1);

	//最后关闭两个文件
	if((fclose(p))!=0 || (fclose(p1))!=0)
		printf("error!!!!");
}

void print()
{
	//输出加密后的内容
	FILE *p;
	if((p=fopen("jiamihou.txt","r"))==NULL)
		printf("error!!");
	char str3[100];
	fgets(str3,sizeof(str3),p);
	puts(str3);
}


int main(void)
{
	//在c语言中，文件操作作要用到系统自带的构造数据类型，FILE。声明这个类型的指针变量，就可以进行文件操作了。
	//在c语言中，有多少自带的构造数据类型？有很多很多。
	//也就是说，学完基本数据类型的用法，之后就是学习包含在各个头文件中的构造数据类型和相关的函数了。
	caret_File();
	jiami();
	print();
	return 0;
}
