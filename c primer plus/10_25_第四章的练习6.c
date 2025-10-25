#include <stdio.h>
int main(){
    char name[50];
    char name2[50];
	printf("请输入你的名(拼音)：");
	scanf(" %s",name);
	printf("请输入你的姓（拼音）：");
	scanf(" %s",name2);
	int a=strlen(name);
	int b=strlen(name2);
	printf("%s %s\n",name,name2);
	printf("%*d %*d\n",a,a,b,b);
	printf("%s %s\n",name,name2);
	printf("%-*d %-*d",a,a,b,b);
	return 0;
} 
