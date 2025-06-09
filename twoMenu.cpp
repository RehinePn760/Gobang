#include"twoMenu.h"
#include "Chess.h"
#include<vector>
#include "isWin.h"
#include "overMenu.h"
#include "init.h"
#include "data2.h"
#include "isInRect.h"
#include "gameState.h"
#include"mainMenu.h"
//文件名：twoMenu.cpp
//负责：WYJ
//功能：双人游戏界面
extern bool needRedraw;
int twoMenu()
{
	A:
	initgraph(900, 500);
	IMAGE img;
	loadimage(&img, "assets/image/game.png", 900, 500);
	putimage(0, 0, &img);

	setlinecolor(BLACK);// 448*448 间隔32 离左边界75 离上下边界26
	for (int i = 0; i < 15; i++)
	{
		line(75, 26 + i * 32, 75 + 480 - 32, 26 + i * 32);
		line(75 + i * 32, 26, 75 + i * 32, 26 + 480 - 32);
	}//绘制棋盘
	setlinestyle(PS_SOLID, 2);
	line(75, 26 + 0 * 32, 75 + 480 - 32, 26 + 0 * 32);
	line(75 + 0 * 32, 26, 75 + 0 * 32, 26 + 480 - 32);//绘制左上边界线
	line(75, 26 + 14 * 32, 75 + 480 - 32, 26 + 14 * 32);
	line(75 + 14 * 32, 26, 75 + 14 * 32, 26 + 480 - 32);//绘制右下边界线

	setbkmode(0);//背景颜色透明；
	settextcolor(RED);//设置颜色
	settextstyle(40, 0, _T("Microsoft YaHei"));//设置字体大小和颜色
	outtextxy(650, 40, "玩家一：黑棋");//填充文字（起点x，起点y）
	outtextxy(650, 40 * 2 + 10, "玩家二：白棋");
	outtextxy(650, 166 + 40 + 20, "重新开始");
	outtextxy(650, 167 * 2 + 40 + 20, "返回");






	//view:
	/******************************************************************************************************/
	//service:

	
	Chess C;
	extern int flag;//0为黑棋 1为白棋
	extern vector<vector<int>> board;


	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			int x = j * 32 + 75;  // 列对应X坐标
			int y = i * 32 + 26;  // 行对应Y坐标

			// 根据数据值决定是否绘制棋子及颜色
			if (board[j][i] == 1) {  // 黑子
				setfillcolor(BLACK);
				solidcircle(x, y, 10);

			}
			else if (board[j][i] == 0) {  // 白子
				setfillcolor(WHITE);
				solidcircle(x, y, 10);

			}

		}
	}

	
	while (1)
	{	
		ExMessage msg;
		// 获取鼠标消息
		while (peekmessage(&msg, EM_MOUSE)) {
			
			bool isHover = isInRect(msg, 650, 166, 250, 166);// 检查鼠标是否在按钮区域内
			
			if (msg.message == WM_LBUTTONDOWN && isHover) {// 处理鼠标点击
				//cout << "按钮被点击" << endl;
				
				init();
				goto A;
			}
			bool isH = isInRect(msg, 650, 166*2, 250, 166);// 检查鼠标是否在按钮区域内

			if (msg.message == WM_LBUTTONDOWN && isH) {// 处理鼠标点击
				//cout << "按钮被点击" << endl;
				mainmenu();
				menuState = MENU;
				return 0;
			}


			
			if (msg.x > 650) continue; //避免超出范围后还能落子
			for (int i = 0; i < 15; i++)
			{
				for (int j = 0; j < 15; j++)
				{

					if (abs(msg.x - i * 32 - 75) < 16 && abs(msg.y - j * 32 - 26) < 16)//优化落子范围
					{
						C.setX(i * 32 + 75);
						C.setY(j * 32 + 26);
						/*if ((C.getX() - 75) >= 15 || (C.getY() - 26) >= 15 || (C.getX() - 75) < 0 || (C.getY() - 26) < 0)
						{
							cout << "OK" << endl;
						}
						else
						{
							cout << "range out" << endl;
						}*/
					}
				}
			}


			if (board[(C.getX() - 75) / 32][(C.getY() - 26) / 32] != (-1))  continue;//避免同一位置落子


			//cout << "*****************************" << endl;//棋子位置日志
			//cout << "X:" << C.getX() << "Y:" << C.getY() << endl;
			//cout << "*****************************" << endl;//棋子位置日志



			if (msg.message == WM_LBUTTONDOWN)//鼠标点击左键
			{
				int mark = flag % 2;
				if (mark)
				{

					setfillcolor(WHITE);//白子
					board[(C.getX() - 75) / 32][(C.getY() - 26) / 32] = 1;
					data2out();
					if (mark == isWin((C.getX() - 75) / 32, (C.getY() - 26) / 32, flag))
					{
						cout << "WIN WHITE" << endl;
						init();//初始化棋盘
						overMenu(mark);
						mainmenu();
						menuState = MENU;//结束后返回主界面
						return 0;
					}
					flag++;//为黑子+
				}
				else
				{
					setfillcolor(BLACK);//黑子

					board[(C.getX() - 75) / 32][(C.getY() - 26) / 32] = 0;
					data2out();
					if (mark == isWin((C.getX() - 75) / 32, (C.getY() - 26) / 32, flag))
					{
						cout << "WIN BLACK" << endl;
						init();//初始化棋盘
						overMenu(mark);
						mainmenu();
						menuState = MENU;//结束后返回主界面
						return 0;
						
					}
					flag++;//为白子+
				}
				solidcircle(C.getX(), C.getY(), 10);//位置，半径





				cout << "********************************************************************************************************************" << endl;//棋盘日志
				for (int i = 0; i < 15; i++)
				{
					for (int j = 0; j < 15; j++)
					{
						cout << board[j][i] << "\t";
					}
					cout << endl;
				}
				cout << "********************************************************************************************************************" << endl;
			}

		}

	}
}