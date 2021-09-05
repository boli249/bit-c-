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
	//1.���������ӡ������Ϣ
	//2.��ʼ������
	//3.��ӡ����
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);//��Ȼû�г�ʼ�����̵Ĵ��룬��Ϊ���������ŵ���0Ҳ�����ӡ��������û���Ҫ���Ի�һ�¡�
	displayboard(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		playermove(board, ROW, COL);
		//��ӡ����
		displayboard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//��������
		computermove(board, ROW, COL);
		//��ӡ����
		displayboard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}

}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("�뿪ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("��Ϸ������\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (input);
}
int main()
{
	test();
	return 0;
}