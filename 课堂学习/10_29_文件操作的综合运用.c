#include <stdio.h>
int main(void)
{
	
	//������ʲô���ţ�����Ҫдһ�����Դ���ÿ��ĵ������ĳ��򣬲������������ڵ�ʱ����Բ�ѯ�� 
	char zhi[60];
	char ri[60];
	char filename[60];
	printf("����������Ľ����������ۣ�");
	scanf("%s",zhi);
	printf("\n���������������ڣ�");
	scanf("%s",ri); 
	FILE *K;
	filename=ri+".txt";
	K=fopen(filename,"w");
	//δ��ɣ� 
	return 0�� 
 } 
