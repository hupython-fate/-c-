#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[100];
	int i,j,k,h=0;
	printf("请输入一句对联：");
	fgets(a,sizeof(a),stdin);
	//回文对联的特征是什么？
	//是正着读和倒这读一样的对联，比如客上天然居，居然天上客。这就是经典的回文对联。
	//也就是说，第一个字和最后一个字相同，第二个字和倒数第二个字相同。

	//首先要计算这个字符串的长度
	k=strlen(a);//长度应该是从1开始数的吧
	printf("字符串长度为%d\n",k);
	printf("以下为它的每个字的字符数字表示，每一行代表一个字。\n");
	for (i=0;i<k-1;i++)//一个中文字竟然占三个字节，三个元素。 
	{
		h++;
		printf("%5d",a[i]);
		if(h==3)
		{
			h=0;
			printf("\n");
		}
	}//也就是说，前后对比也应该要三个字节三个字节的对比。

	//然后用一个循环来比对前后是否相同
	for(i=2,j=k-2;i<((k-1)/2);i+=3,j-=3)
	{
		if(a[i]!=a[j])
		{
			h++;
			//printf("%d %d",a[i],a[j]);
			//printf("\n");
		}
	}

	//printf("%d",h);
	//h==0,也就是说前后一一对应
	if(h==0)
	{
		printf("%s是回文对联。",a);
	}




		return 0;
}
