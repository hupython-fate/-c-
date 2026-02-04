#include <stdio.h>

int main(void)
{
	//char **q;//二级指针，也就是说，相当于一个字符串。
	char q[100];
	char k[100];
	char l;
	FILE *p;
	if((p=fopen("readfile.txt","r"))==NULL)
	{
		printf("error!!");
		return 0;
	}
	/*fscanf(p,"%s",q);//只能读取一行。//光标会自动后移吗？
	printf("%s",q);	

	fscanf(p,"%s",k);//没有错，光标自动后移了！读取的内容是下一行的。
	printf("%s",k);

	//也就是说，每调用一次fscanf,光标会自动移到最后读取的位置。
	//那么，如果我想在同一行呢？
	fseek(p,0L,0);//随机定位函数。移动光标到文件开头。
		      //这相当于rewind(p);
	*/
	rewind(p);
	fscanf(p,"%c",&l);
	printf("%c",l);

	printf("\n");

	rewind(p);
	fscanf(p,"%s",q);
	printf("%s",q);

	printf("\n");

	fseek(p,0L,2);//移动到文件末尾

	//feof函数和ftell函数。
	//前这判断文件指针是否指先文件末尾，ftell判断文件指针的当前位置。
	long n;

	n=ftell(p);
	printf("当前文件指针位置为%ld\n",n);

	//fseek(p,-2L,2);
	
	int x;
	x=feof(p);//如果在文件末尾返回1,不在则返回非1（0）。
	if(x) printf("当前文件指针在文件末尾。\n");
	else printf("当前文件指针不在文件末尾\n");

	//怎么才能快速的把文件指针移到文件末尾？
	//用fseek(p,0L,2);//2表示文件末尾位置。	
	//可以用循环和条件判断来求文件末尾的位置。
	char ch;
	rewind(p);
	while(!feof(p))//通过字符读和循环，还有feof()来判断文件指针是否在末尾，可以把一整个文件输出。
	{
		ch=fgetc(p);
		printf("%c  ",ch);
		n=ftell(p);
		printf("%ld\n",n);
	}
	//printf("文件末尾的指针位置为%ld\n",n);//为什么是1？？？因为用错了函数，现在好了。
	//
	//用fscanf();可以实现顺序读文件，而这样我就可以用它来做一些有趣的程序。比如，顺序读一个文件，统计一个字或词在这个文件中的出现次数？
	
	//feof();ftell();fseek();rewind();exit();这几个函数一定要熟练掌握。
	return 0;
}
