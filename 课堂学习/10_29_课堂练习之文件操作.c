#include <stdio.h>
int main()
{
    char h;
	char c[60];
	char wen[80];
	char ti[60];
	printf("请输入一句话：");
	scanf("%s",&c); 
	FILE *file;//一，写入阶段。 
	//char wen[60];
	file=fopen("c语言的文件操作.txt","w");//w是只写模式，无法使用fgets和fgetc、fscanf。 
	printf("\n%p",file);//打印出指针所储存的内存地址。 
	fputs("hello world!",file);//字符串度写。
	fputc('a',file);//字符写。
	fprintf(file,"%s",c);//格式化写。//第二次输入的话会覆盖第一次的输入。 
	//fgets(wen,n,file); 
	int x=fclose(file);//关闭文件。 
	printf("\n%d",x);
	//printf("%s",wen);
	
	
	
	FILE *GHJ;//二，读取阶段。 
	GHJ=fopen("c语言的文件操作.txt","r"); 
	printf("\n%p",GHJ);
	h=fgetc(GHJ);//字符读，从这个文件中读取单个字符，然后将其赋值给一个字符型变量。 
	printf("\n%c",h); 
	fgets(wen,9,GHJ);//这句话的意思是从指针GHJ所指向的文件中读取9-1个字符，然后赋指给wen这个字符数组。//这是字符串读。 
	printf("\n%s",wen);
	fscanf(GHJ,"%s",ti);//格式化读，从指针GHJ所指向的文件中读取内容，赋值给ti这个数组，之所以不用&取地址符，是因为数组名就是地址。
	printf("\n%s",ti); 
	//对于同一个指针，使用不同的读取函数分别读取，先读取的数据不能被再次读取，
	//比如说，文件内容hello,第一次读取的是he,那么第二次读取的就不能是he,可以是l,也可以是llo,但不能是he.
	fclose(GHJ);//关闭文件。 
	
	
	/*
	指针file和指针GHJ所储存的内存地址是一样的，运行这个程序就可以直观的看出。 
	*/ 
	return 0;
 } //// 重置文件指针到开头
    //fseek(file, 0, SEEK_SET);this importent!
