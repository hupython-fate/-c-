#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(void)
{
	char ch;
	printf("请问你是否完成了今天的小进步？(y/n)");
	printf("___\b\b\b");
	scanf("%c",&ch);
	if(ch!='y')
	{
		printf("完成了再来抽奖吧！\n");
		return 0;
	}





	//用字符指针数组构建设一个奖励池。
    	char *reword[]={
	"假如是晚上，泡一杯奶茶；假如是上午，泡一杯咖啡；",
	"去看一集自己想看的动漫；",
	"起身做5分钟拉伸（推荐使用“微运动”App);",
	"去接一杯温水，顺便眺望窗外1分钟;",
	"做一组「程序员肩颈放松操」（可附链接);",
	"站立办公15分钟;",
	"快走300步（绕办公室/阳台一圈);",
	"关闭所有通知，专注冥想3分钟（可用潮汐/小睡眠）",
	"听一首喜欢的歌（非工作背景音乐）",
	"写下今天完成的一件小事并夸夸自己",
	"深呼吸三次，想象自己在海边/森林",
	"允许自己“摸鱼”5分钟（刷喜欢的 subreddit / GitHub Trending)",
	"阅读一篇高质量技术博客（如阮一峰周刊、InfoQ）",
	"给自己的代码加一条清晰注释",
	"整理一个常用命令/快捷键到笔记中",
	"尝试用新方法重构一段旧代码（哪怕只有3行）",
	"在 知乎或者CSDN 上帮别人回答一个问题"
	};
	//奖励池的内容可以慢慢添加。
	int x=sizeof(reword)/sizeof(reword[0]);
	//一个指针变量好像占8字节？
	//printf("%d",x);
	//x的值就是元素个数。
	
	//用srand和rand生成随机数
	srand(time(NULL));//获取当前时间戳作为种子。
	
	int sui_ji_shu=rand() % x;
	//生成的随机数为属于[0,x-1]
	
	int i=0;

	for(i=0;i<5;i++)//增加期待用的。
	{
		printf("随机中～～～\n");
		sleep(3);
	}

	i=0;
	while(i<=sui_ji_shu)
	{
		//printf("ddd\n");
		printf("\r%s",reword[i]);//\r是光标回退的命令。
		//sleep(1);//停止1秒，制造期待。
		i++;
	}
	//这样，最后打印出来的就是随机奖励的内容了
	return 0;
}
