#include <stdio.h>
int main(void)
{
	int i;
	char arr[255];
	for(i=0;i<255;i++)
	{
		scanf("%c",&arr[i]);
		if(arr[i]=='\n') break;
	}
	printf("====================================================\n");
	while(i>=0)
	{
		printf("%c",arr[i]);
		i--;
	}
	return 0;
}
