#include "init.h"
#include "data2.h"
//�ļ��� init.h
//����LYX
//���ܣ���ʼ������
extern vector<vector<int>> board;
extern int flag;
void init()
{
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			board[j][i] = -1;
		}
	}
	flag = 0;
	data2out();
}
