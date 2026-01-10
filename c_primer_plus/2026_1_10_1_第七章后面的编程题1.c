#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch;
	int kong=0,huan=0,qita=0;
	ch=getchar();
	while(ch!='#')
	{
		//putchar(ch+1);
		if(ch==' ')
			kong++;
		else if(ch=='\n')
			huan++;
		else
			qita++;
		ch=getchar();
	}
	printf("%d %d %d",kong,huan,qita);
	return 0;
}
