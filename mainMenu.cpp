#include "mainMenu.h"
//�ļ��� mainMenu.cpp
//����WYJ
//���ܣ�������
void mainmenu()
{
	initgraph(900, 500);
	IMAGE img;
	loadimage(&img, "assets/image/mainmenu.png", 900, 500);
	putimage(0, 0, &img);
}
	
