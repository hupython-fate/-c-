#include <stdio.h>
#define shi 0.1
#define san 0.3
#define wu 0.5
int main()
{
	float a=0.0;
	float b=0.0;
	float c=0.0;
	float d=0.0;
	float jiao=0.0;
	while(1)
	{
	    printf("������������֣�");
	    scanf("%f",&a);
	    if(a>100 || a<1)
	    {
	    	printf("��ֵΪ1~100�֣����������룬��Ҫ���������Χ��");
	    	continue;
		}
		else
		break; 
    }
    while(1)
	{
	    printf("�����붽�������֣�");
	    scanf("%f",&b);
	    if(b>100 || b<1)
	    {
	    	printf("��ֵΪ1~100�֣����������룬��Ҫ���������Χ��");
	    	continue;
		}
		else
		break;
    }
    while(1)
	{
	    printf("������ѧ�����֣�");
	    scanf("%f",&c);
	    if(c>100 || c<1)
	    {
	    	printf("��ֵΪ1~100�֣����������룬��Ҫ���������Χ��");
	    	continue;
		}
		else
		break;
    }
    while(1)
	{
	    printf("������ϵ�������֣�");
	    scanf("%f",&d);
	    if(d>100 || d<1)
	    {
	    	printf("��ֵΪ1~100�֣����������룬��Ҫ���������Χ��");
	    	continue;
		}
		else
		break;
    }
    jiao=shi*a+shi*b+wu*c+san*d;
    if(jiao<=70)
    {
    	printf("�ý�ʦ����Ϊ����ְ��");
	}
	else if(jiao>70 && jiao<90)
	{
		printf("�ý�ʦ�ǳ�ְ�ģ�"); 
	}
	else{
		printf("�����ʦ������ģ�");
	} 
 } 
