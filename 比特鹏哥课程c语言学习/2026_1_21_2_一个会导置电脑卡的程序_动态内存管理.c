#include <stdlib.h>

int main(void)
{
	while(1) malloc(1);
	//这个程序就像一个小型的病毒程序一样，会无限的向系统申请内存空间，是一个错误的程序。
	return 0;
}
