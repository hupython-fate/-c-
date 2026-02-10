#include <stdio.h>

float add(float a,float b)
{
	return a+b;
}

float jian(float a,float b)
{
	return a-b;
}

float chu(float a,float b)
{
	return a/b;
}

float chen(float a,float b)
{
	return a*b;
}




int main(void)
{
	char shuan[100];
	char dui[14]={'1','2','3','4','5','6','7','8','9','0','+','-','/','*'};
	float aa,bb;
	char zi;
	while(1)
	{
		printf("\n请输任意算式,如(2+3),[只能计算两项,但能多次计算,在运算符号的输入中输q退出],然后按回车.\n");
	//	printf(">>>");
	//	scanf("%s",shuan);;
	//
		getchar();//清空缓存区.
		printf("请输入第一项数字(可以是整数,可以是小数,还可以是负数,但不能是分数,注意,分数的形式是除法,是分子除以分母):");
		scanf("%f",&aa);
		getchar();//同上.
		printf("请数入运算符号,如果是加请输入 + ,如果是减请输入 - ,如果是乘请输入 * ,如果是除请输入 / :");
		scanf("%c",&zi);
		printf("请输入第二项数字:");
		scanf("%f",&bb);
		if(zi=='+')
		{
			printf("两数之和:%f",add(aa,bb));
		}
		else if(zi=='-')
		{
			printf("两数之差:%f",jian(aa,bb));
		}
		else if(zi=='*')
		{
			printf("两数之积:%f",chen(aa,bb));
		}
		else if(zi=='/')
		{
			printf("两数之商:%f",chu(aa,bb));
		}
		else
		{
			printf("您输入的运算符号不属于我们规定的那些!请重新输入!");
			continue;
		}
		if(aa=='q' || bb=='q' || zi=='q')
			break;
	}

//	for(int a=0;a<(sizeof(shuan)/sizeof(shuan[0]));a++)
//	{	//	printf("%c",shuan[0]);
	

//	}

//	printf("%c",shuan[0]);
//经过测试,输入两位以上的数字,每一个数字都会被分别储存,而+,-,=这些也会被分别储存.
//这个程序需要用一循环遍历整个数组.然后分别判断每一个字符的种类,如果是数字就要把它转化成数字,如果是除了+-/*之外的字符,就要不理会,也就是说,创立一个对比数组.
//将用户输入的原始数据于之进行对比,如果有相符的是数字,就转化为int类型吗?
//如果分别设四个函数,每个函数计算.
//
//两个数就可以计算出一个结果,然后把这个结果当作一个数来看待.
//
//取莫,幂运算,乗方运算暂时不加进去.
//嗯,先写出来能计算任意两个数的程序吧,
	return 0;
}
