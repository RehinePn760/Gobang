#include"settingMenu.h"
//文件名：settingMenu.cpp
//负责：WYJ
//功能：设置界面
void setting()
{
	IMAGE img;
	loadimage(&img, "assets/image/setting.png", 900, 500);
	putimage(0, 0, &img);
}
