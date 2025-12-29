#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t cat_time;


	cat_time=time(NULL);

	printf("当前的时间戳：%ld\n",(long)cat_time);
	//输出的是自1970年1月1日到现在的秒数
	
	//用ctime()转化为可读字符串。
	printf("当前可读时间：%s\n",ctime(&cat_time));

	//用

	return 0;
}
