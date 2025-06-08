#include "overMenu.h"
//文件名：overMenu.cpp
//负责：WYJ
//功能：结束界面
void overMenu(int flag)
{
	initgraph(900, 500);

	if (flag % 2)//白胜界面
	{
		IMAGE img1;
		loadimage(&img1, "assets/image/white.png", 900, 500);
		putimage(0, 0, &img1);
		Sleep(2000);
		//exit(0);
	}
	else//黑胜界面
	{
		IMAGE img1;
		loadimage(&img1, "assets/image/black.png", 900, 500);
		putimage(0, 0, &img1);
		Sleep(2000); 
		//exit(0);
	}
	

	IMAGE img;
	loadimage(&img, "assets/image/over.png", 900, 500);
	putimage(0, 0, &img);


}