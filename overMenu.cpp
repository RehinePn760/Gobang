#include "overMenu.h"
//�ļ�����overMenu.cpp
//����WYJ
//���ܣ���������
void overMenu(int flag)
{
	initgraph(900, 500);

	if (flag % 2)//��ʤ����
	{
		IMAGE img1;
		loadimage(&img1, "assets/image/white.png", 900, 500);
		putimage(0, 0, &img1);
		Sleep(2000);
		//exit(0);
	}
	else//��ʤ����
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