#include "main.h"

int main(void)
{
	float qian_ka,qian_ka_tian;
	int kkk;
	char ch;
	struct Aman *head;
	struct health *head2;
	while(1)
	{
		printf("请问你想测多少人的数据？\n");
		printf("请输入一个整数:");
		scanf("%d",&a);//a是一个全局变量。
		head=caret(a);//这个函数用链表获取用户的输入！哈哈哈.
	//不过，随着输入的函数和数据储存的位置发生的改变，其它的函数也全部得跟着变
	//要写一个把用户的输入变成文件的函数。
		//while((ch=getchar())!='\n' || ch != EOF);
		printfile(head);//函数返回类型应为void,参数是链表的头指针。这个函数的文件名怎么办？应该由用户决定。
	//还可以写一个结构体，把三个多余的子函数统一为一个子函数，定义一个结构体变量就可以了。
		head2=health(head);//这个函数的返回类型应为一个结构体变量，链表的头指针作为参数，可以创建两个单向链表，第二个用来储存根据第一个计算出来的结果。
	//然后再写一个函数，把第二个单向链表的内容写成文件。
	//这样，这个程序一共用了四个函数，两个单向链表，两个结构体类型。
		print_health(head2,head);
    		/*printf("==========Note: Your result depends on your data. If your data is wrong, your result will be wrong.==========\n");
    		printf("========================================This result is for reference only.===================================\n");
		printf("========================================I am not responsible for any problems.================================\n");
		printf("\nIf you want to test again, please enter 666.");*/
		printf("============注意!这些计算结果完全依赖于您输入的数据，如果你输入的数据有误，哪么算出的结果也将有错误!=========\n");
		printf("========================================本次测试的结果仅供参考===============================================\n");
		printf("======================================如有任何意外，本人概不负责=============================================\n");
		printf("______\b\b\b\b\b");
		scanf("%d",&kkk);
		if(kkk==666) continue;
		else break; 
    	}
	return 0;
}
