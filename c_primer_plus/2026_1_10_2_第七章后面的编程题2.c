#include <stdio.h>

int main(void)
{
	char ch;
	int k=0;
	ch=getchar();
	while(ch!='#')
	{
		if(ch!='\n')
			printf("%c-%p\t",ch,ch);
		k++;
		k=k%8;
		if(!k)
			printf("\n");
		ch=getchar();
		if(ch=='\n')
			k=0;
	}
	return 0;
}
