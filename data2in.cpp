#include "data2.h"
#include"twoMenu.h"
#include "Chess.h"
#include<vector>
#include "isWin.h"
#include "overMenu.h"
#include "init.h"
#include "data2.h"
extern vector<vector<int>> board;
//文件名 data2in.cpp
//负责：LYX
//功能：读取游戏存档
void data2in()
{
	ifstream ifs("assets/data2.txt");
	if (!ifs.is_open()) {
		cout<< "无法打开文件!" << endl;
	}
	
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{	
			ifs >> board[j][i];
			
		}
	}
	//for (int i = 0; i < 15; i++)
	//{
	//	for (int j = 0; j < 15; j++)
	//	{
	//		cout << board[j][i] << " ";
	//	}
	//	cout << endl;
	//}


	

	ifs.close();
}