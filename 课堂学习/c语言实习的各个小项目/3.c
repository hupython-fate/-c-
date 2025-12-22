#include <stdio.h>
int main(void)
{
	int kkk=0;
	int i=0;
	int k=0,l=0;
	printf("请输入一个正整数：");
	scanf("%u",&kkk);
	do{
		if(i%2==0)//偶数和
		{
			k+=i;
		}
		else //奇数和
		{
			l+=i;
		}
		i++;
	}while(i<=kkk);

	printf("偶数和%d，奇数和%d。",k,l);
	//1 2 3 4 5 6  7 8 9 10
	//如果输入10
	//偶数和为2 +4+6+8+10=12+18=30
	//奇数和为 1 +3 +5 + 7 +9=18+7=25
	
	return 0;
}
