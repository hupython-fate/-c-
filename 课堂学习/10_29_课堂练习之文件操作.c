#include <stdio.h>
int main()
{
    char h;
	char c[60];
	char wen[80];
	char ti[60];
	printf("������һ�仰��");
	scanf("%s",&c); 
	FILE *file;//һ��д��׶Ρ� 
	//char wen[60];
	file=fopen("c���Ե��ļ�����.txt","w");//w��ֻдģʽ���޷�ʹ��fgets��fgetc��fscanf�� 
	printf("\n%p",file);//��ӡ��ָ����������ڴ��ַ�� 
	fputs("hello world!",file);//�ַ�����д��
	fputc('a',file);//�ַ�д��
	fprintf(file,"%s",c);//��ʽ��д��//�ڶ�������Ļ��Ḳ�ǵ�һ�ε����롣 
	//fgets(wen,n,file); 
	int x=fclose(file);//�ر��ļ��� 
	printf("\n%d",x);
	//printf("%s",wen);
	
	
	
	FILE *GHJ;//������ȡ�׶Ρ� 
	GHJ=fopen("c���Ե��ļ�����.txt","r"); 
	printf("\n%p",GHJ);
	h=fgetc(GHJ);//�ַ�����������ļ��ж�ȡ�����ַ���Ȼ���丳ֵ��һ���ַ��ͱ����� 
	printf("\n%c",h); 
	fgets(wen,9,GHJ);//��仰����˼�Ǵ�ָ��GHJ��ָ����ļ��ж�ȡ9-1���ַ���Ȼ��ָ��wen����ַ����顣//�����ַ������� 
	printf("\n%s",wen);
	fscanf(GHJ,"%s",ti);//��ʽ��������ָ��GHJ��ָ����ļ��ж�ȡ���ݣ���ֵ��ti������飬֮���Բ���&ȡ��ַ��������Ϊ���������ǵ�ַ��
	printf("\n%s",ti); 
	//����ͬһ��ָ�룬ʹ�ò�ͬ�Ķ�ȡ�����ֱ��ȡ���ȶ�ȡ�����ݲ��ܱ��ٴζ�ȡ��
	//����˵���ļ�����hello,��һ�ζ�ȡ����he,��ô�ڶ��ζ�ȡ�ľͲ�����he,������l,Ҳ������llo,��������he.
	fclose(GHJ);//�ر��ļ��� 
	
	
	/*
	ָ��file��ָ��GHJ��������ڴ��ַ��һ���ģ������������Ϳ���ֱ�۵Ŀ����� 
	*/ 
	return 0;
 } //// �����ļ�ָ�뵽��ͷ
    //fseek(file, 0, SEEK_SET);this importent!
