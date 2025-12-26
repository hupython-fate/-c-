#include <stdio.h>
#include <string.h>
//把myfile.txt文件中的大写字母转化成小写字母。
int main(void)
{
	FILE *p;
	char str[100];//一个中间变量
	if((p=fopen("myfile.txt","r+"))==NULL)//因为要改变原文件，所以是w+
	{
		printf("error!!");
		return 0;
	}
	fgets(str,sizeof(str),p);//读文件	
	//printf("%s",str);
	int k=strlen(str),i=0;
	for(i=0;i<k-1;i++)
		str[i]+=32;
	fprintf(p,"%s",str);//格式化写
	return 0;
}
