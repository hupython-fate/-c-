#include <stdio.h>
#include <string.h>

void paixu(char x[])
{
	char *i,*j;
	char k;
	int ll;
	for(ll=0;ll<strlen(x)-1;ll++)//花括号可以省略。
	for(i=x,j=i;i<j+strlen(x)-2;i++)//会不会造成数组越界？不会。
	{//减1的话会把换行符给排到最前面，所以要减2.
		if(*i>*(i+1))
		{
			k=*i;
			*i=*(i+1);
			*(i+1)=k;
		}
	}
	//*sss=asdfg这是一个需要排序的字符串
	//strlen(sss)==6,因为会计算换行符

}//ok，排序的函数写好了，接下来就是合并和函数了
 //
void hebin(char x[],char y[])
{
//因为字符串的结尾是'\0',所以只需要用指针遍历到'\0',就可以开始把第二个字符串的首元素开始前移和覆盖了
	char *p1,*p2,*p3=NULL,*p4=NULL;
	for(p1=x,p2=p1;p1<p2+strlen(x);p1++)
	{
		//printf("ppppppp\n");
		if(*p1=='\n')
		{
			//printf("sssssss\n");
			for(p3=y,p4=p3;p3<p4+strlen(y);p3++,p1++)
			{
				*p1=*p3;
			}
			break;
		}
	}
}

void quhan(char x[])
{
	char *p,*p1;
	for(p=x,p1=p;p<p1+strlen(x);p++)
	{
		if(*p=='\n')
			*p='\0';
	}


}


int main(void)
{
	//输入两个从小到大排序好的字符串，合并两个字符串，合并后的字符串依旧按从小到大的顺序排列/
	
	char str1[100],str2[100];

	printf("请输入第一个字符串：");
	fgets(str1,sizeof(str1),stdin);

	printf("请输入第二个字符串：");
	fgets(str2,sizeof(str2),stdin);

	//比如说abcd acbd两个字符串，合并排列后，是aabbccdd.
	//每个字符串以'\0'结尾，还有'\n'和'\t'.
	//得遍历字符串，万一输入的字符串是没有排列好的呢？
	//也许得写一个函数来把字符串按从小到大的顺序排序，然后，再写一个函数去把两个字符串合并，然后，再调用前一个排序用的函数，字符串就弄好了。
	//
	//也就是需要写两个函数，分两步走，一合并，二排序。
	paixu(str1);
	paixu(str2);
	hebin(str1,str2);
	paixu(str1);//排序合并好的字符串。
		    //还可以写一个函数去除多余的换行符。
	quhan(str1);
	puts(str1);//验证一下。
	return 0;
}
