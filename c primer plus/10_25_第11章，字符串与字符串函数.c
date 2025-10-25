#include <stdio.h>
int main() {
	"我是一个人！";//这是一个字符串字面量。
	printf("%s\n,%p\n,%c\n","我是一个人！","我是一个人！",*"a是一个人");
	const char yan[50]="我的名字是嘿嘿嘿！";
	const char *l="我是指针表示字符串的方法！aaa";
	printf("%s",l);
	printf("%s",yan);
	return 0;
} 
