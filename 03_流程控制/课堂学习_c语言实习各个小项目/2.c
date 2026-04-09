#include <stdio.h>

int main(void)
{
	float aa;
	char bb;
	float kkk=0.0;
	float ben_li;
	printf("请输入你的本金：");
	scanf("%f",&aa);
	printf("请选择你的存款期限：\na,三个月.\nb,六个月.\nc,一年.\nd,二年.\ne,三年.\nf,五年.\n");
	getchar();
	printf("你的选择：____\b\b\b\b");
	scanf("%c",&bb);
	switch(bb)
	{
		case 'a':
			kkk=0.26;
			break;
		case 'A':
			kkk=0.26;
			break;
		case 'b':
			kkk=0.28;
			break;
		case 'B':
			kkk=0.28;
			break;
		case 'c':
			kkk=0.33;
			break;
		case 'C':
			kkk=0.33;
			break;
		case 'd':
			kkk=0.375;
			break;
		case 'D':
			kkk=0.375;
			break;
		case 'e':
			kkk=0.425;
			break;
		case 'E':
			kkk=0.425;
			break;
		case 'f':
			kkk=0.425;
			break;
		case 'F':
			kkk=0.475;
			break;
	}
	ben_li=aa+aa*kkk;
	printf("本利和为%f",ben_li);
	
	return 0;
}
