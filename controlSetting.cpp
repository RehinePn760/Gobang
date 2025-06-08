#include"controlSetting.h"
#include"gameState.h"
//文件名 controlSetting.cpp
//负责：WYJ
//功能：设置界面功能
void controlSetting(ExMessage& msg, gameState& menuState)
{

	setlinecolor(WHITE);
	if (isInRect(msg, 430, 200, 510 - 430, 240 - 200))
	{
		setlinecolor(RED);
		if (msg.message == WM_LBUTTONDOWN)menuState = MUSIC;

	}
	rectangle(420, 190, 510, 240 );

	setlinecolor(WHITE);
	if (isInRect(msg, 430, 340, 510 - 430, 390 - 340))
	{
		setlinecolor(RED);
		if (msg.message == WM_LBUTTONDOWN)menuState = MENU;

	}
	rectangle(430, 340, 510 , 390 );

}