#include <stdio.h>
int main() {
	int x=0;
	int y=0;
	while(1){
	printf("����������һ��ʮ��������");
	printf("__________\b\b\b\b\b\b\b\b\b");
	scanf("%d",&x);
	printf("\n��Ӧ�İ˽�����Ϊ%o,��Ӧ��ʮ��������Ϊ%x.",x);
	printf("��������ѭ��������3��");
	scanf("%d",&y);
	if(y==3){
		break;
	}
	}
	return 0;
} 
