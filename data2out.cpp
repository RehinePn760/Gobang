//�ļ��� data2out.cpp
//����LYX
//���ܣ�������Ϸ�浵
#include "data2.h"
extern vector<vector<int>> board;
void data2out()
{
	ofstream ofs("assets/data2.txt");
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			ofs << board[j][i] << " ";
		}
		ofs<<endl;
	}
	ofs.close();
}
