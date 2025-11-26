#include <stdio.h>
#define G 5
#define M 3
#define X 1/3

int main(void)
{
	int a=0,b,c;
	do{
		b=0;
		do{
			c=0;
			do{
				if(a+b+c==100 && a*G+b*M+c*X==100)
				{
					printf("公鸡有%d只，母鸡有%d只，小鸡有%d只！\n",a,b,c);

				}
				c++;
			}while(c<100);
			b++;
		}while(b<100);
		a++;
	}while(a<100);
	return 0;
}


