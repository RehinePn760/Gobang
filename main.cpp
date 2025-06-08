#include<iostream>
#include<graphics.h>
#include<vector>
#include"mainMenu.h"
#include"isInRect.h"
#include"twoMenu.h"
#include"controlMenu.h"
#include"settingMenu.h"
#include"musicMenu.h"
#include"controlSetting.h"
#include"controlmusic.h"
#include"gameState.h"
#include "Chess.h"
#include "data2.h"

using namespace std;

enum gameState menuState = MENU;//界面信息

ExMessage msg;//鼠标信息

bool needRedraw = true;//是否切换界面
int flag = 0;//记录判断该哪一方落子黑0白1

vector<vector<int>> board(15, vector<int>(15, -1));//初始为-1 双人的棋盘



int main()
{	
	board.resize(15);
	for (int i = 0; i < board.size(); i++) {
		board[i].resize(15, -1); // 每行15列，初始值-1
	}//用下标操作前必须操作步骤

	mainmenu();
	data2in();//读取双人棋盘数据
	
	while (true)
	{
		
		if (needRedraw)
		{	
			
			switch (menuState)
			{
			case MENU:
				mainmenu();
				break;
			case TWOGAME:
				twoMenu();
				break;
			case SSETTING:
				setting();
				break;
			case MUSIC:
				musicMenu();
				break;
			default:
				break;
			}
		}
		needRedraw = false;
		while (peekmessage(&msg, EM_MOUSE))
		{
			gameState temp = menuState;//防止死循环，一直打印某一个界面
			if(menuState == MENU) controlMenu(msg, menuState);
			if(menuState == SSETTING) controlSetting(msg, menuState);
			if(menuState == MUSIC) controlMusic(msg, menuState);
			
			if(menuState != temp) needRedraw = true;
		}
	}
	
	
		
	
	return 0;
}


