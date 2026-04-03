#include <stdio.h>
int main(void)
{

	char a[80]="hello";
	char b[80]="world";
	//puts(a,b);//这样做行不行呢？
		  //答案是不行。
	puts(a),puts(b);//实验证明这是可以的。
	return 0;
}
