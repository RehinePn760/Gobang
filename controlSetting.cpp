#include"controlSetting.h"
#include"gameState.h"
void controlSetting(ExMessage& msg, gameState& menuState)
{

	setlinecolor(WHITE);
	if (isInRect(msg, 430, 190, 500-430, 240-200))
	{
		setlinecolor(RED);
		if (msg.message == WM_LBUTTONDOWN)menuState = MUSIC;
	}
	rectangle(430, 180,  500,  240);

	setlinecolor(WHITE);
	if (isInRect(msg, 430, 340, 510 - 430, 390 - 340))
	{
		setlinecolor(RED);
		if (msg.message == WM_LBUTTONDOWN)menuState = MENU;

	}
	rectangle(430, 340, 510 , 390 );





}