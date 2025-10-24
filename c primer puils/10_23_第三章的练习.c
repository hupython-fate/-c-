#include <stdio.h>
//这些是常见的转用序列。 
int main() {
	printf("请输入一个ASCLL码： ");
	printf("\a"); //报警。
	printf("\b");//退格。
	printf("\f");//换页。
	printf("\r");//回车。
	printf("\t");//水平制表符。
	printf("\v");//垂直制表符。
	printf("\\");//反斜杠。
	printf("\'");//单引号
	printf("\"");//双引号。
	printf("\?");//问号。
	/*printf("\0oo");//八进制位。//每个o可代表0~7中的一个数。 如032. 
	printf("\xhh");//十六位制数。 //每个h可代表0~f中的一个数。如x6f*/ 
	return 0;
} 
