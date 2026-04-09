#include <stdio.h>
#include <string.h>
int main(void)
{
	char filename[100];
	char filename_2[100];
	char file[500];
	char mi[20];
	char yesorno;
	char mi_2[20];
	char mi_3[20];
	printf("这是一个简单的文件保密柜：\n");
	printf("第一步是创建你的文件密码柜，首先为他取个名字：");
	scanf("%s",filename);
	printf("\n");
	printf("不管你输入的是什么，你的文件保密柜的名字已经确定了，所以记住他！\n");
	printf("====================你的文件内容，请写入=======================\n");
	scanf("%s",file);
	printf("请再次按回车键确认！\n");
	getchar();//用来清空缓存区的．
	getchar();
	printf("现在请你输入你想要创立的密码：");
	scanf("%s",mi);
	printf("\n");
	do{
	printf("请再次确认你的密码：");
	scanf("%s",mi_2);
	}while(strcmp(mi_2,mi)!=0);
	printf("\n");
	printf("您的密码设立完毕，您要察看您的保密内容吗？（y/n）:");
	getchar();	
	scanf("%c",&yesorno);
	if(yesorno=='y')
	{
		printf("\n");
		do{
		printf("请输入您的文件密码柜名：");
		scanf("%s",filename_2);
		}while(strcmp(filename,filename_2)!=0);
		do{
		printf("请输入你对应文件密码柜的密码：");
		scanf("%s",mi_3);
		}while(strcmp(mi_3,mi)!=0);
		printf("\n");
		printf("恭喜你，身份验证成功！\n");
		printf("您的文件内容如下：\n");
		printf("%s",file);
		printf("\a");
		printf("请按回车退出程序．");
		getchar();
	}
	else
	{
		printf("请按回车退出程序！");
		getchar();
		getchar();
	}
	return 0;
}
