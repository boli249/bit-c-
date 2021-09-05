#define _CRT_SECURE_NO_DEPRECATE 1


#include "game.h"


void menu()
{
	printf("*******************************\n");
	printf("***** 1.play       0.exit *****\n");
	printf("*******************************\n");
}
void game()
{
	char ret = '0';
	//1.定义数组打印棋盘信息
	//2.初始化棋盘
	//3.打印棋盘
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);//虽然没有初始化棋盘的代码，因为我们里面存放的是0也不会打印，但是最好还是要初试化一下。
	displayboard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		playermove(board, ROW, COL);
		//打印棋盘
		displayboard(board, ROW, COL);
		//判断玩家是否赢
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//电脑下棋
		computermove(board, ROW, COL);
		//打印棋盘
		displayboard(board, ROW, COL);
		//判断电脑是否赢
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}

}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("请开始游戏\n");
			game();
			break;
		case 0:
			printf("游戏结束！\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);
}
int main()
{
	test();
	return 0;
}