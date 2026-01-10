#include <stdio.h>
int main(void)
{
	float kk=0;
	printf("请输入一个字符，我能判断你输入的是数字还是别的字符！\n");
	printf("_____\b\b\b\b\b"); 
	_Bool k=(scanf("%f",&kk)==1);
	if(k) printf("你输入的是数字！\n");
	else printf("你输入的是非数字！\n");
	getchar();
    return 0; 
} 
