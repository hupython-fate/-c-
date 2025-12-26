#include <stdio.h>
#include <string.h>
int main(void)
{
	FILE *p1,*p2;
	char str[100];
	if((p1=fopen("sfile.txt","w"))==NULL)
	{
		printf("error!!");
		return 0;
	}
	if((p2=fopen("dfile.txt","w"))==NULL)
	{
		printf("error!!");
		return 0;
	}
	


	printf("请输入一串字符，我会把它正序存入sfile中，会倒序把它存入dfile中！\n");
	printf("________\b\b\b\b\b\b\b\b\b");
	fgets(str,100,stdin);

	fprintf(p1,"%s",str);
	
	int k=strlen(str);
	printf("%d",k);
	
	for(k-=1;k>=0;k--)
		fputc(str[k],p2);//字符写	
	fclose(p1);
	fclose(p2);
	return 0;
}
