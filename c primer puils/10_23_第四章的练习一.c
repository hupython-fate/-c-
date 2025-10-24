#include <stdio.h>
int main() {
	char fost_name[100];
	char less_name[100];
	while(1){
	printf("\n请输入您的姓：");
	scanf("%s",less_name);//数组名本身就是地址，所以不用&。
	printf("\n请输入您的名："); 
	scanf("%s",fost_name);
	printf("\n%s,%s",fost_name,less_name);
}
	return 0;
}//这可以作为一个数据输入函数，还可以用来做一个交互式的游戏。
//甚至于结合各种各样的公式，和if，while语句，还可以做到很有意义的事，比如健康测试系统，结合ibm等公式，
//还可以做游戏，文字解迷游戏！ 
