#include <stdio.h>
int main(void)
{
	int a,b;
	for(a=0;a<5;a++)
	{
		for(b=0;b<a+1;b++)
			printf("$");
		for(b=0;b<5-a;b++)
			printf(" ");
	        printf("\n");
	}
    return 0;
}
