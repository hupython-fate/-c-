#include <stdio.h>

int main(void)
{
	int shu;
	char *arr[12]={"一月","二月","三月","四月","五月","六月","七月","八月","九月","十月","十一月","十二月"};
	while(1)
	{
	printf("请输入数字：");
	scanf("%d",&shu);
	if(shu>=1 && shu<=12)
	{
		printf("%s\n",arr[shu-1]);
		break;
	}
	else 
	{
		printf("您输入的数字不合理，请重新输入！");
		continue;
	}
	}
	return 0;
}
