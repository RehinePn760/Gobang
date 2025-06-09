#include"isWin.h"
#include"Chess.h"
#include"twoMenu.h"
//文件名 isWin.cpp
//负责：LYX
//功能：判断胜利
extern vector<vector<int>> board;
int isWin(int x, int y, int flag)
{
	cout << x << " " << y << endl;
	//**************************************************************************//
	int count = 1;//记录子数
	int mark = flag % 2;
	for (int i = 1; i < 5; i++)//横向右 
	{
		if ( x + i >= 15) break;//防止越界
		if (board[x + i][y] == mark)
		{
			count++;
			//cout << count << endl;
			if (5 == count) {
				//cout << "-count" << endl;
				return  mark;
			}
		}
		else
		{
			break;
		}

	}
	for (int i = 1; i < 5; i++)//横向左
	{
		if (x - i < 0) break;//防止越界
		if (board[x - i][y] == mark)
		{
			count++;
			//cout << count << endl;
			if (5 == count) {
				//cout << "-count" << endl;
				return  mark;
			}
		}
		else
		{
			break;
		}
	}
	count = 1;//初始化为1
	//**************************************************************************//

	for (int i = 1; i < 5; i++)//竖向 上
	{
		if (y + i >= 15) break;//防止越界
		if (board[x][y + i] == mark)
		{
			count++;
			if (5 == count) {
				//cout << "|count" << endl;
				return  mark;
			}
		}
		else
		{
			break;
		}
	}
	for (int i = 1; i < 5; i++)//竖向 下
	{
		if (y - i < 0) break;//防止越界
		if (board[x][y - i] == mark)
		{
			count++;
			if (5 == count) {
				//cout << "|count" << endl;
				return  mark;
			}

		}
		else
		{
			break;
		}

	}
	
	count = 1;//初始化为1
	//**************************************************************************//

	for (int i = 1; i < 5; i++)//	\向 
	{
		if (x - i < 0 || y - i <0) break;//防止越界
		
		if (board[x - i][y - i] == mark)
		{
			count++;
			if (5 == count) {
				//cout << "\count" << endl;
				return  mark;
			}


		}
		else
		{
			break;
		}
	}
	for (int i = 1; i < 5; i++)//	\向 
	{
		if (y + i >= 15 || x + i >= 15) break;//防止越界
		
		if (board[x + i][y + i] == mark)
		{
			count++;
			if (5 == count)
			{
				//cout << "\count"  << endl;
				return  mark;
			}
			 
		}

	}
	
	count = 1;//初始化为1
	//**************************************************************************//

	for (int i = 1; i < 5; i++)//	/向 
	{
		if (x + i >= 15 || y - i < 0) break;
		
		//防止越界
		
		if (board[x + i][y - i] == mark)
		{
			count++;
			//cout << count << endl;
			if (5 == count) 
			{
				//cout << "/count" << endl;
				
				return  mark;
			}
		}
		else
		{
			break;
		}
	}
	for (int i = 1; i < 5; i++)//	/向 
	{
		
		if (x - i < 0 || y + i >= 15) break;//防止越界
		if (board[x - i][y + i] == mark)
		{
			count++;
			
			if (5 == count)
			{
				//cout << "/count" << endl;
				return  mark;
			}
			
		}
		else
		{
			break;
		}


	}
	
	count = 1;//初始化为1
	//**************************************************************************//
	return -1;
}