#include <stdio.h>

int main(void)
{
	FILE *p;
	char str[100],str2[100];
	if((p=fopen("data.dat","w+"))==NULL)
	{
		printf("error!!");
		return 0;
	}
	printf("请问今天的年月日？");
	fgets(str,sizeof(str),stdin);

	fputs(str,p);//写入
	
	fclose(p);

	FILE *qq;
	qq=fopen("data.dat","r");
	fgets(str2,100,qq);//读取文件内容
			  
	printf("%s",str2);//输出读取到的文件的内容。
	fclose(qq);	
	return 0;
}
