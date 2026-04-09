#include <stdio.h>
#include <string.h>

void str_zhuang(char x)
{
	if('a'<x && 'z'>x)
	{
		x=x-32;//把小写转成大写
	}
}


int main(void)
{
	//用一个二维数组就能结决这个问题，唯一的难点是如何求一个二维数组有多少个元素？如果是字符类二维数组的话，是否就只需统计这个二维数组'\0'的数量？
	//恩。想起来可行。
	char arr[50][10];
	int i,j=0,a,b=0,c;
	char arr_zhong[10];//用来交换的中间变量的值。

	puts("请问您打算输入多少单词？最多可输入50个单词。");
	scanf("%d",&a);
	puts("如果您感到厌烦，不想输那么多的单词，就输入q，然后按回车。");

	for(i=0;i<a;i++)
	{
		j++;
		printf("这是您输入的第%d个单词：",j);
		scanf("%s",&arr[i]);
		if(arr[i][0]=='q') break;	
	}
	c=i;//i的值就是用户实际输入的单词数
	
	//要把首字母全部转成大写或者小写，方便比较
	for(i=c;i>=0;i--)
		str_zhuang(arr[i][0]);//这里是全部转成大写。

	for(i=c;c>=0;c--)//冒泡排序
	{
		for(i=j-1;i>=1;i--)
		{
			if(arr[i][0]<arr[i-1][0])//也就是说，条件为真，后面的首字母的ASCII码值更小，但是按首字母排序的话应该是后面的ASCII码值更大
			{
				strcpy(arr_zhong,arr[i]);
				strcpy(arr[i],arr[i-1]);
				strcpy(arr[i-1],arr_zhong);
			}		
		}
	}
	//理论上来说，这个程序应该能完成排序。
	//需要把排序的结果打印出来
	for(i=0;i<=j-1;i++)
	{
		puts(arr[i]);
		printf("\n");
	}
	return 0;
}
