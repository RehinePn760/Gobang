#include "mainMenu.h"
//文件名 mainMenu.cpp
//负责：WYJ
//功能：主界面
void mainmenu()
{
	initgraph(900, 500);
	IMAGE img;
	loadimage(&img, "assets/image/mainmenu.png", 900, 500);
	putimage(0, 0, &img);
}
	
