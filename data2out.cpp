//文件名 data2out.cpp
//负责：LYX
//功能：保存游戏存档
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
