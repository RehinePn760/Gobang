#include "overMenu.h"
#include <fstream>
//�ļ�����overMenu.cpp
//����WYJ
//���ܣ���������
extern int flag;
int scoreW = 0;
int scoreB = 0;
void overMenu(int mark)
{
	initgraph(900, 500);

	if (mark % 2)//��ʤ����
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
	
	/**************************************************************************************/
	IMAGE img;//չʾ����
	loadimage(&img, "assets/image/score.png", 900, 500);
	putimage(0, 0, &img);

	setbkmode(0);//������ɫ͸����
	settextcolor(BLACK);//������ɫ
	settextstyle(40, 0, _T("Microsoft YaHei"));//���������С����ɫ


	ifstream ifs("assets/score.txt");
	ifs >> scoreW >> scoreB;
	ifs.close();

	if (mark % 2)
	{
		scoreW += flag * 100 + 500;
	}
	else
	{
		scoreB += flag * 100 + 500;
	}
	
	char str1[20];
	sprintf_s(str1, "%d", scoreW); //������ת��Ϊ�ַ���

	char str2[20];
	sprintf_s(str2, "%d", scoreB); //������ת��Ϊ�ַ���


	if (scoreW >= scoreB)
	{
		outtextxy(405, 130, "���ְ�");//������֣����x�����y��

		outtextxy(405, 130 + 80, "����");
		outtextxy(485, 130 + 80, str1);
		outtextxy(405, 150 + 130, "����");
		outtextxy(485, 150 + 130, str2);
	}
	if (scoreW < scoreB)
	{
		outtextxy(405, 130, "���ְ�");//������֣����x�����y��
	
		outtextxy(405, 130 + 80, "����");
		outtextxy(485, 130 + 80, str2);
		outtextxy(405, 150 + 130, "����");
		outtextxy(485, 150 + 130, str1);
	}
	
	ofstream ofs("assets/score.txt");
	ofs << scoreW << " " << scoreB;
	ofs.close();
	
	
	
	Sleep(2000);


}