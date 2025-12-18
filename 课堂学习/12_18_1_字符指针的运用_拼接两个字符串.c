#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[100],str2[100];
	printf("请输入两个字符串：\n");
	printf(">>>");
	fgets(str1,sizeof(str1),stdin);
	printf(">>>");
	fgets(str2,sizeof(str2),stdin);

	//接下来用指针将两个字符串拼接
	/*char *p=str1,*p2=str2;
	k=strlen(str1);
	k1=strlen(str2);
	for(i=0;i<k;i++)
	{
		if(*(p+i)==" " || *(p+i)=="\n"  || *(p+i)=="\t")
		{
			*(p+i)=*p2;
		}
	}*/

	//用一些语句，把两个字符串首尾相联，然后，按顺序放入同一个字符数组里
	/*int h=0;
	int j=1;
	for(i=0;i<k+k1;i++)
	{
		h++;
		if(str1[i]==" "||str1[i]=="\n"||str1[i]=="\t"||str[i]="\0")
			j=0;
		if(j==0)
			str1[i]=str2[i-h];

	}*/

	//思路是什么?
	//
	//首先，一个字符串的最后面肯定是"\0",然后是可能的制表符或者换行符。
	//也就是说，得像那一程序一样，像删除数组中的多余的元素一样。
	//先用指针遍历字符串，直到找到"\0",然后，"\0"的位子被第二个字符串的第1个元素顶调，直到第二个字符串的"\0"到了新的位子，也就是说，
	int k=strlen(str1);
	int k2=strlen(str2);
	char *p1=NULL,*p2=NULL,*p3=NULL;
	p1=str1;
	p2=p1;
	p3=str2;
	for(p2=p1;p1<p2+k+k2;p1++)
	{
		//printf("kkkkkkkkkkkkkk\n");
		if(*p1=='\n')
		{
			//printf("jjjjjjjj");
			for(p3=str2;*p3!='\n';p1++,p3++)
				*p1=*p3;
			break;
		}
	}

	puts(str1);



	return 0;
}
