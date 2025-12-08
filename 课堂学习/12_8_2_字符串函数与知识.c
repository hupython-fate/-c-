#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[]="hello c of string word!";
	char b[10];
	puts(a);//字符串输出函输，类似于printf();
	puts("能告诉我，你的名字吗？");
	//a=gets();
	//puts(b);
	fgets(a,sizeof(a),stdin);
	a[strcspn(a,"\n")]='\0';//去除读取的字符串中的换行符
	strcpy(b,"你好");
	strcat(a,b);
	puts(a);


	return 0;
}
