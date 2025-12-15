#include <stdio.h>
#include <string.h>
int main(void)
{
	int kk,i;
	char *str;
	str="c primer puls";
	//这样相当于char *str="c primer puls";
	
	//这样定义是没有问题的，字符指针似乎有些特殊？
	
	//str指向的是字符串的首元素地址，在c语言中，字符串本质是字符数组。
	
	kk=strlen(str);//这是可以这样用的，因为字符串名的本质是数组名，而数组名的本质是指针。
	printf("%d",kk);

	for(i=0;i<kk;i++)
		printf("%c",str[i]);//指针也是可以带下标的。
	return 0;
}
