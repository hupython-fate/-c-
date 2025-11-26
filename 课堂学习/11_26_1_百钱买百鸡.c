#include <stdio.h>

#define G 5
#define M 3
#define X 1/3

int main(void)
{
	/*问题和需求是这样的，一只公鸡值5元，一只母鸡值3元，三只小鸡值一元,一百元要刚好买一百只鸡，问公鸡多少，母鸡多少，小鸡多少？*/
	int a,b,c;//a为公鸡的数量，b为母鸡的数量，c是小鸡的数量。
	for(a=0;a<101;a++)
	{	
		for(b=0;b<101;b++)
		{
			for(c=0;c<101;c++)
			{
				if(a+b+c==100 && a*G+b*M+c*X==100)
				{
					printf("公鸡的数量是%d只，母鸡的数量是%d只，小鸡的数量是%d只！\n",a,b,c);

				}
			}
		}
	}
	return 0;
}
