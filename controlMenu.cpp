#include"controlMenu.h"
#include"gameState.h"
void controlMenu(ExMessage& msg , gameState&menuState)
{	

		setlinecolor(WHITE);
		if (isInRect(msg, 390, 200, 510 - 390, 240 - 200))
		{
			setlinecolor(RED);
			if (msg.message == WM_LBUTTONDOWN)menuState = ONEGAME;
		}
		rectangle(390, 200, 510, 240);

		setlinecolor(WHITE);
		if (isInRect(msg, 390, 260, 510 - 390, 290 - 260))
		{
			setlinecolor(RED);
			if (msg.message == WM_LBUTTONDOWN)menuState = TWOGAME;

		}
		rectangle(390, 260, 510, 290);


		setlinecolor(WHITE);
		if (isInRect(msg, 390, 310, 510 - 390, 340 - 310))
		{
			setlinecolor(RED);
			if (msg.message == WM_LBUTTONDOWN)menuState = SSETTING;
			
		}
		rectangle(390, 310, 510, 340);


		setlinecolor(WHITE);
		if (isInRect(msg, 390, 360, 510 - 390, 390 - 360))
		{
			setlinecolor(RED);
			if (msg.message == WM_LBUTTONDOWN)exit(-1);
		}
		rectangle(390, 360, 510, 390);
	
	
}