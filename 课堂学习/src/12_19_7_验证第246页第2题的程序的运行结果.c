#include <stdio.h>

void fff(char *p)
{
	char *q;
	q=p;
	while(*q!='\0')
	{
		(*q)++;
		q++;
	}
}

int main(void)
{
	char a[]={"Program"},*p;
	p=&a[3];
	fff(p);
	printf("%s\n",a);
	return 0;
}
