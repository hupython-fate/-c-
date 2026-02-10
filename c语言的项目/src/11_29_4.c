#include <stdio.h>
int main(void)
{	int c=99;
	printf("%p",c);
	int* cc;
	*cc=c;
	printf("%d",*cc);
	return 0;
}
