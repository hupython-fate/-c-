#include <stdio.h> 
#define MAX_SHU 1000
struct stu{
	int age;
	char name[MAX_SHU];
	int xingbie;
	float shen;
	float ti;
	float shuchenji;
	float yuchenji;
	float yinchenji;
};

//дһ����������������ѧ������Ϣ��
void shu_ru(struct stu student[]){
	printf("��������Ҫ�����ѧ����������");
	int n;
	n=getchar();
	for (int i=1;i<n;i++){
	printf("������ѧ��������:\n");
	scanf(" %s",student[i].name);//������������ǵ�ַ������ȡ��ַ���� 
	printf("������%s�����䣺\n",student[i].name);
	scanf("%d",&student[i].age);
	printf("������%s���Ա���������1����Ů����0��\n",student[i].name);
	scanf("%d",&student[i].xingbie);
	printf("������%s����ߣ�һ��Ϊ��λ����\n",student[i].name);
	scanf("%f",&student[i].shen);
	printf("������%s�����أ���ǧ��Ϊ��λ����\n",student[i].name);
	scanf("%f",&student[i].ti);
	printf("������%s�����ĳɼ���\n",student[i].name);
	scanf("%f",&student[i].yuchenji);
	printf("������%s����ѧ�ɼ���\n",student[i].name);
	scanf("%f",&student[i].shuchenji);
	printf("������%s��Ӣ��ɼ���\n",student[i].name);
	scanf("%f",&student[i].yinchenji);
}
} 

int main() {
	struct stu student[MAX_SHU];
	shu_ru(student);
	return 0;
}
