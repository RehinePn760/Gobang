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

enum gameState menuState = MENU;//������Ϣ

ExMessage msg;//�����Ϣ

bool needRedraw = true;//�Ƿ��л�����
int flag = 0;//��¼�жϸ���һ�����Ӻ�0��1

vector<vector<int>> board(15, vector<int>(15, -1));//��ʼΪ-1 ˫�˵�����



int main()
{	
	board.resize(15);
	for (int i = 0; i < board.size(); i++) {
		board[i].resize(15, -1); // ÿ��15�У���ʼֵ-1
	}//���±����ǰ�����������

	mainmenu();
	data2in();//��ȡ˫����������
	
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
			gameState temp = menuState;//��ֹ��ѭ����һֱ��ӡĳһ������
			if(menuState == MENU) controlMenu(msg, menuState);
			if(menuState == SSETTING) controlSetting(msg, menuState);
			if(menuState == MUSIC) controlMusic(msg, menuState);
			
			if(menuState != temp) needRedraw = true;
		}
	}
	
	
		
	
	return 0;
}


