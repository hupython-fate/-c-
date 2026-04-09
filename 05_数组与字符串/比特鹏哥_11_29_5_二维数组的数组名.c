#include <stdio.h>
int main(void)
{
	//二维数组的数组名和一维数组的数组名是一样的，都是表示第一个元素的地址。
	//但是不同在于，二维数组是以一维数组为元素的，所以，二维数组的数组名代表的是第一行的一维数组的地址。
	int kkk[3][3]={2,2,2,2,2,2,2,2,2};
	printf("%p\n",kkk);	
	printf("%p\n",kkk+1);
	printf("---------------\n");
	printf("%p\n",&kkk[0][0]);
	printf("%p\n",&kkk[0][0]+1);
	return 0;
}
