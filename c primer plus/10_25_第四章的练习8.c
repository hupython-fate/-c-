#include <stdio.h>
#define AABB 3.785
#define BBFF 1.609 
int main(){
	float li=0.0;
	float qi=0.0;
	float gon=0.0;
	float shen=0.0; 
	printf("���������е���̣�Ӣ���");
	printf("____\b\b\b\b");
	scanf("%f",&li);
	printf("\n�������������ĵ�������(����)��");
	printf("____\b\b\b\b");
	scanf("%f",&qi);
	gon=li*BBFF;
	shen=qi*AABB;
	printf("��������%.1f���\n",gon);
	printf("��������%.1f���ͣ�\n",shen);
	return 0;
} 
