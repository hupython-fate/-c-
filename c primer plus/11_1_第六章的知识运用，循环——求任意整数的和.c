#include <stdio.h>
int main(void)//������ʲô�����������û��������֣�Ȼ�󲻶ϵ����û��������ֻ����������֮�͡� 
{
	float shu[100]={0};
	printf("�������1�����֣�");
	scanf("%f",&shu[0]);
	printf("�������2�����֣�");
	scanf("%f",&shu[1]);
	int i=1;
	do{
		printf("������������������������������;���򣬾�������ĸa:");
		i++;
	}while(scanf("%f",&shu[i])==1);
	//��ô����֪���û������˶��ٸ������أ�
	//�ţ�˼��һ�£�
	//i�͵����û������˶��ٸ�����
	//��һ�¾�֪���ˡ�
	//printf("%d",i); 
	//û��i��ֵ�͵����û���������ֵ�������
	float asdf;
	float jkl=0.0;
	for(int j=0;j<=i;j++)//����i����3. 
	{
		asdf=shu[j];
		asdf=asdf+jkl;
		jkl=asdf;
	}
	printf("%.2f",asdf); 
	/*��һ��ѭ��ʱ��j=0,0<3,jkl=0-->asdf=shu[0],asdf=shu[0]+0,jkl=asdf=shu[0]+0;-->j+1=1,
	�ڶ���ѭ��ʱ��j=1,1<3,jkl=shu[0]+0-->asdf=shu[1],asdf=shu[1]+shu[0]+0,jkl=asdf=shu[1]+shu[0]+0;-->j+1=2. 
	������ѭ��ʱ��j=2,2<3,jkl=shu[0]+shu[1]+0-->asdf=shu[2],asdf=shu[1]+shu[0]+shu[2]+0,jkl=asdf=����-->j+1=3.
	���Ĵ�ѭ��ʱ��j=3,3=3,jkl=shu[1]+shu[0]+shu[2]+0-->asdf=shu[3],asdf=shu[3]+shu[1]+shu[0]+shu[2]+0,jkl=asdf=������-->j+1=4
	��Ϊj=4,4<=3Ϊ�٣�����û�е����ѭ���� 
	
	�����㿴������������ۼ��㷨û�����⣡ 
	
	*/ 
	return 0;
 } 
