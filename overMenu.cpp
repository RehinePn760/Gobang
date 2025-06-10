#include "overMenu.h"
#include <fstream>
//文件名：overMenu.cpp
//负责：WYJ
//功能：结束界面
extern int flag;
int scoreW = 0;
int scoreB = 0;
void overMenu(int mark)
{
	initgraph(900, 500);

	if (mark % 2)//白胜界面
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
	
	/**************************************************************************************/
	IMAGE img;//展示积分
	loadimage(&img, "assets/image/score.png", 900, 500);
	putimage(0, 0, &img);

	setbkmode(0);//背景颜色透明；
	settextcolor(BLACK);//设置颜色
	settextstyle(40, 0, _T("Microsoft YaHei"));//设置字体大小和颜色


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
	sprintf_s(str1, "%d", scoreW); //将整数转换为字符串

	char str2[20];
	sprintf_s(str2, "%d", scoreB); //将整数转换为字符串


	if (scoreW >= scoreB)
	{
		outtextxy(405, 130, "积分榜");//填充文字（起点x，起点y）

		outtextxy(405, 130 + 80, "白棋");
		outtextxy(485, 130 + 80, str1);
		outtextxy(405, 150 + 130, "黑棋");
		outtextxy(485, 150 + 130, str2);
	}
	if (scoreW < scoreB)
	{
		outtextxy(405, 130, "积分榜");//填充文字（起点x，起点y）
	
		outtextxy(405, 130 + 80, "黑棋");
		outtextxy(485, 130 + 80, str2);
		outtextxy(405, 150 + 130, "白棋");
		outtextxy(485, 150 + 130, str1);
	}
	
	ofstream ofs("assets/score.txt");
	ofs << scoreW << " " << scoreB;
	ofs.close();
	
	
	
	Sleep(2000);


}