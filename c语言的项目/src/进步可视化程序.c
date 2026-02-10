#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void)
{
	// 使用系统命令创建目录（跨平台但效率较低）
    	#ifdef _WIN32
        	system("md 进步日记");  // Windows
		char sss[1000]="进步日记\\\0";
		//system("cd 进步日记");
    	#else
        	system("mkdir -p 进步日记");  // Linux/Unix/Mac
		//system("cd 进步日记");
		char sss[1000]="进步日记/\0";
    	#endif


	time_t cat_time;
	cat_time=time(NULL);
	char arr[1000]={0},str[]=".dat\0";
	//printf("当前的时间戳：%ld\n",(long)cat_time);
	//输出的是自1970年1月1日到现在的秒数
	//用ctime()转化为可读字符串。
	//printf("当前可读时间：%s\n",ctime(&cat_time));
	strcpy(arr,ctime(&cat_time));
	int k=strlen(arr);
	for(int i=0;i<k;i++)
	{
		if(arr[i]=='\n')
			arr[i]='\0';
		else if(arr[i]==' ')
			arr[i]='_';
	}
	strcat(arr,str);//使用的关键是两个字符串必须以\0结尾，否则会失效。
	strcat(sss,arr);

	//printf("%s",sss);

	FILE *q1=NULL;
	q1=fopen(sss,"w+");
	if(q1==NULL)
	{
		printf("error!");
		return 1;
	}
	char sttr[10000];
	puts("今天的小任务是什么？");
	scanf("%s",sttr);
	
	fprintf(q1,"小任务如下：  %s\n",sttr);

	printf("\n");
	puts("验证结果如何？（如：2道题对1道/全对/仍不懂_不要记录学习时间，要记录学会了什么。)");
	scanf("%s",sttr);

	fprintf(q1,"验证结果如下： %s\n",sttr);
	return 0;
}
