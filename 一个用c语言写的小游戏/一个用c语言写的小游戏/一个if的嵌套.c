#include <stdio.h>
extern void mao_xianA();
extern void lian_aiB();
int main()
{

	int a=0;
	printf("请输入你今天的心情指数:");
	scanf(" %d",&a);


	if(a>60)
	{
	char d='0';
	printf("你好，今天的心情还不错呢！有兴趣聊聊天吗？\n");
	printf("你将扮演一位勇者，根据给出的信息作出判断和选择，最终成功打败魔王！\n");
	printf("如果你愿意的话，请尊贵的玩家输入A,不愿意的话请输入B:");
	scanf(" %c",&d);
	    if(d=='A' || d=='a')
		{
	    printf("恭喜你，勇敢的玩家，你即将开启一段波澜起浮的冒险！\n");
		mao_xianA();//定义一个函数，用来存储这一条分线的冒险。
	    }

		else if(d=='B' || d=='b')
		{
		int h=0;
		printf("太遗撼了，尊贵的玩家竟然不愿意开始这个游戏，是怕了吗？害！\n");
		printf("请输入任意数字退出游戏，胆小鬼玩家！：");
		scanf(" %d",&h);
		}
	}


	else if(a<=60){
    int df=0;
	int b=0;
	printf("你好，今天的心情还可以呢！有兴趣聊聊吗？\n");
	printf("你将扮演一位从贫穷的孤儿院考上最高魔法学院的少女，根据给出的信息作出判段和选择，最终成功攻略全部恋爱对象，达到h_end的结局！\n");
	printf("如果你愿意的话，请美丽又可爱的玩家输入1，不愿意的话请输入0：");
	scanf("%d",&b);
	    if(b==1){
		printf("恭喜你，美丽又充满智慧的玩家，你即将开启一段充满刺激的恋爱！\n");
		lian_aiB();//定义一个函数，用来储存这一条支线的剧情。
		}
		else if(b==0){
		printf("不愿意的吗？嗯，没事的，你想玩可以随时来找我，我随时等候着你！\n");
		
		printf("请输入任意一个数来退出游戏：");
		scanf(" %d",&df);
		}
	}



    return 0;
}