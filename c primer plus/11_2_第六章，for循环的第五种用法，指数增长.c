#include <stdio.h>
int main(void)
{
	for(float i=1;i<10000;i=i*1.1)//每次增长10%。 
	printf("i==%f\n",i);
    return 0;//灵活的使用三个表达式，乃是for循环的精髓。 
} 
