#include <stdio.h>
#define nian 365
#define yue 30
#define zou 7
#define yueee 12
int main()
{
	int a,b,c,d,e,ee,xx,y,yy;
	printf("������������ݺ��·ݣ�");
	scanf("%d,%d",&a,&b);
	printf("\n������Ŀ����ݺ��·ݣ�");
    scanf("%d,%d",&c,&d);
    e=(a*yueee)+b;//���ڵ��·�
	ee=(c*yueee)+d;//Ŀ���·�
	xx=ee-e;//��ֵ�·� 
	y=xx/yueee;//����ɲ�ֵ��� 
	yy=xx%yueee;//�����������
	printf("������%d��%d�µ�ʱ�䣡",y,yy); 
    
 } 
