#include"controlMenu.h"
#include"gameState.h"
//文件名 controlMenu.cpp
//负责：WYJ
//功能：提供按钮反馈 切换页面
void controlMenu(ExMessage& msg , gameState&menuState)
{	

		setlinecolor(WHITE);
		if (isInRect(msg, 390, 260, 510 - 390, 290 - 260))
		{
			setlinecolor(BROWN);
			if (msg.message == WM_LBUTTONDOWN)menuState = TWOGAME;

		}
		rectangle(390, 260, 510, 290);


		setlinecolor(WHITE);
		if (isInRect(msg, 390, 310, 510 - 390, 340 - 310))
		{
			setlinecolor(BROWN);
			if (msg.message == WM_LBUTTONDOWN)menuState = SSETTING;
			
		}
		rectangle(390, 310, 510, 340);


		setlinecolor(WHITE);
		if (isInRect(msg, 390, 360, 510 - 390, 390 - 360))
		{
			setlinecolor(BROWN);
			if (msg.message == WM_LBUTTONDOWN)exit(-1);
		}
		rectangle(390, 360, 510, 390);
	
	
}