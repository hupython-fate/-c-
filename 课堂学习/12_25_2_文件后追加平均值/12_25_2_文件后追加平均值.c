#include <stdio.h>
#include <string.h>
int open_read()
{
	int i=0,j=0,c=0,k1=0,kk=0;
	char str[100];
	FILE *p;
	p=fopen("my_file.txt","r");
	fgets(str,sizeof(str),p);
	int k=strlen(str);
	/*for(i=0;i<k;i++)
	{
		printf("%c",str[i]);
	}*/
	//根据实验的规律，字符数字-48就会等于int类型的数字。
	//比如，'7'-48=7;
	//用一个循环嵌套完成累加，再除一下总数，就是平均值了。
	for(i=0;i<6;i++)
	{
		for(j=0;j<2;j++)
		{
			k1=(str[c]-48)*10+(str[c+1]-48)*1;
		}
		c=c+3;
		kk+=k1;//kk的值就是总值。它除以6就是平均值。
	}
	//printf("\n%d",kk);//可以，计算成功了。
	fclose(p);
	return kk/6;
}

void zuijia(int a)
{
	//printf("%d",a);
	FILE *p;
	p=fopen("my_file.txt","a");//a是追加模式。
	//要把整型数据a转化成字符型数据或者字符串。
	int x,y;
	x=a%10;//a的个位。
	y=a/10;//a的十位。
	char str3[3];
	str3[0]=(char)y+48;
	str3[1]=(char)x+48;
	str3[2]='\0';
	//printf("%s",str3);
	fputs(str3,p);
	fclose(p);
}
int main(void)
{
	//首先应该打开这个文件，读取内容，然后再计算平均值，最后用'a'追加平均值。
	int a;
	a=open_read();
	zuijia(a);
	return 0;
}
