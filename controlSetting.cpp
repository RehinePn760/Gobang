#include"controlSetting.h"
#include"gameState.h"
//�ļ��� controlSetting.cpp
//����WYJ
//���ܣ����ý��湦��
void controlSetting(ExMessage& msg, gameState& menuState)
{

	setlinecolor(WHITE);
	if (isInRect(msg, 410, 175, 485 - 410, 220 - 175))
	{
		setlinecolor(BROWN);
		if (msg.message == WM_LBUTTONDOWN)menuState = MUSIC;

	}
	rectangle(410, 175, 485, 220 );

	setlinecolor(WHITE);
	if (isInRect(msg, 410, 345, 485 - 410, 390 - 345))
	{
		setlinecolor(BROWN);
		if (msg.message == WM_LBUTTONDOWN)menuState = MENU;

	}
	rectangle(410, 345, 485, 390);

}