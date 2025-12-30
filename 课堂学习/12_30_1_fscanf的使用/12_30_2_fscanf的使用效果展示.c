#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *p;
	if((p=fopen("readfile.txt","r"))==NULL)
	{
		printf("error!!");
		exit(0);//相当于return 0;
	}
	int i;
	char x[100];
	for(i=0;i<3;i++)
	{
		printf("第%d行的内容：",i+1);
		fscanf(p,"%s",x);
		printf("%s\n",x);
	}

	fseek(p,-12L,2);
	int k;
	fscanf(p,"%d",&k);
	printf("读取文件中的数字：%d\n",k);

	rewind(p);
	printf("指定读取文件中的字母e:");
	char ch;
	while('d'!=fgetc(p));
	printf("%c",fgetc(p));
	return 0;
}
