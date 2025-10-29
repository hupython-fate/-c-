#include <stdio.h> 
int main()
{
	//二进制文件操作，
	//fread是读取二进制文件的函数。fwrite是写入二进制文件的函数。
	char kkk[60]={"96"};
	FILE *k;
	k=fopen("C:/Users/pc/Pictures/Camera Roll/sdf.jpg","rb");//读取二进制文件
	if(k==NULL) printf("文件打开失败。");
	else printf("文件打开成功！"); 
	int x=fread(kkk,1,9,k);
	printf("读取了%d字节的数据！",x);
	printf("\n读取的数据为：%d或%f或%s或%c或%p或%o或%x",kkk,kkk,kkk,kkk,kkk,kkk,kkk);
	int c=fclose(k);
	if(c==0) printf("\n文件关闭成功！");
	else printf("\n文件关闭失败！");
	
	//读二进制文件不行，那写二进制文件呢？为什么读二进制文件不行?很奇怪，明明文件名是正确的。输入的是具体路径却会报错。比如C:\Users\pc\Pictures\Camera Ro\ sss.jpg 

	/*
	 // 方法1：使用正斜杠（推荐）
    k = fopen("C:/Users/pc/Pictures/Camera Ro/ sss.jpg", "rb");
    
    // 方法2：使用双反斜杠
    // k = fopen("C:\\Users\\pc\\Pictures\\Camera Ro\\ sss.jpg", "rb");
    
    // 方法3：只使用文件名（文件必须在程序同一目录）
    // k = fopen("sdf.jpg", "rb");
	
	*/
	
	//这就是为什么我的读取会失败的原因，因为使用文件名的话，文件必须同程序在同一目录。 
	printf("\n==================================================");
	//文件读取成功了！！ 
	
	
	int write[60]={12,65,87,9};
	FILE *zhi;
	zhi=fopen("C:/Users/pc/Pictures/Camera Roll/ooda.jpg","wb");
	if(zhi==NULL) printf("\n文件创建失败。");
	else printf("\n文件创建成功！");
	fwrite(write,9,9,zhi);
	int obg=fclose(zhi);
	if(obg==0) printf("\n文件关闭成功！"); 
	else printf("\n文件关闭失败。");
	return 0;
}
