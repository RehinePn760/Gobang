#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<vector>
#include"mainMenu.h"
#include"isInRect.h"
#include"oneMenu.h"
#include"twoMenu.h"
#include"controlMenu.h"
#include"controlSetting.h"
#include"controlmusic.h"
#include"gameState.h"
#include"setting.h"
#include"musicMenu.h"


using namespace std;

enum gameState menuState = MENU;
ExMessage msg;

bool needRedraw = true;


int main()
{
	mainmenu();
	
	while (true)
	{
		
		if (needRedraw)
		{	
			
			switch (menuState)
			{
			case MENU:
				mainmenu();
				break;
			case ONEGAME:
				oneMenu();
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


