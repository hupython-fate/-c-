#include <stdio.h>
#include <string.h>
int strppp(char *x,char *y,int k1,int k2);//函数的声明
int main(void)
{
	char str1[100],str2[100];
	printf("请输入第一个字符串：");
	fgets(str1,sizeof(str1),stdin);
	printf("请输入第二个字符串：");
	fgets(str2,sizeof(str2),stdin);

	//要对比两个字符串，只需要用两个指针遍历对比就行了，
	//上面的要求是编写一个子函数。
	//恩，也就是说，用字符串作为函数的参数，而返回值是整数。
	
	int k1=strlen(str1);
	int k2=strlen(str2);

	int k=strppp(str1,str2,k1,k2);
	if(k)//相等返回1,不相等返回0.
		printf("两个字符串相等！\n");
	else 
		printf("两个字符串不相等！\n");
	return 0;
}

int strppp(char *x,char *y,int k1,int k2)
{
	while(*x&&*y&&*x==*y)
	{
		x++;
		y++;
	}
	//可以用ASCII码值来判断。
	//很明显，如果两个字符串相等，那么他们的*x==*y==0
	//而如果不相等，也就是说*x-*y!=0为真。
	if(*x-*y!=0)
		return 0;
	else return 1;
}
