#include <stdio.h>
int main(void)
{
	int shu;
	int pa[60];
	int i=0;
	printf("������һ��ʮ��������");
	scanf("%d",&shu);
	while(shu!=0)
	{
	    pa[i]=shu%8;
	    shu=shu/8;
	    i++;
	 }
	
	for(int j=i-1;j>=0;j--)
	{
		printf("%d",pa[j]);
	}
    return 0;
}//����ת����ѭ����ȡ�෨�� 
