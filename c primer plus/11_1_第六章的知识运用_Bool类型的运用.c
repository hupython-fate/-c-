#include <stdio.h>
int main(void)
{
	float kk=0;
	printf("������һ���ַ��������ж�������������ֻ��Ǳ���ַ���\n");
	printf("_____\b\b\b\b\b"); 
	_Bool k=(scanf("%f",&kk)==1);
	if(k) printf("������������֣�\n");
	else printf("��������Ƿ����֣�\n");
	getchar();
    return 0; 
} 
