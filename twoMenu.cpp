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
//�ļ�����twoMenu.cpp
//����WYJ
//���ܣ�˫����Ϸ����
extern bool needRedraw;
int twoMenu()
{
	A:
	initgraph(900, 500);
	IMAGE img;
	loadimage(&img, "assets/image/game.png", 900, 500);
	putimage(0, 0, &img);

	setlinecolor(BLACK);// 448*448 ���32 ����߽�75 �����±߽�26
	for (int i = 0; i < 15; i++)
	{
		line(75, 26 + i * 32, 75 + 480 - 32, 26 + i * 32);
		line(75 + i * 32, 26, 75 + i * 32, 26 + 480 - 32);
	}//��������
	setlinestyle(PS_SOLID, 2);
	line(75, 26 + 0 * 32, 75 + 480 - 32, 26 + 0 * 32);
	line(75 + 0 * 32, 26, 75 + 0 * 32, 26 + 480 - 32);//�������ϱ߽���
	line(75, 26 + 14 * 32, 75 + 480 - 32, 26 + 14 * 32);
	line(75 + 14 * 32, 26, 75 + 14 * 32, 26 + 480 - 32);//�������±߽���

	setbkmode(0);//������ɫ͸����
	settextcolor(RED);//������ɫ
	settextstyle(40, 0, _T("Microsoft YaHei"));//���������С����ɫ
	outtextxy(650, 40, "���һ������");//������֣����x�����y��
	outtextxy(650, 40 * 2 + 10, "��Ҷ�������");
	outtextxy(650, 166 + 40 + 20, "���¿�ʼ");
	outtextxy(650, 167 * 2 + 40 + 20, "����");






	//view:
	/******************************************************************************************************/
	//service:

	
	Chess C;
	extern int flag;//0Ϊ���� 1Ϊ����
	extern vector<vector<int>> board;


	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			int x = j * 32 + 75;  // �ж�ӦX����
			int y = i * 32 + 26;  // �ж�ӦY����

			// ��������ֵ�����Ƿ�������Ӽ���ɫ
			if (board[j][i] == 1) {  // ����
				setfillcolor(BLACK);
				solidcircle(x, y, 10);

			}
			else if (board[j][i] == 0) {  // ����
				setfillcolor(WHITE);
				solidcircle(x, y, 10);

			}

		}
	}

	
	while (1)
	{	
		ExMessage msg;
		// ��ȡ�����Ϣ
		while (peekmessage(&msg, EM_MOUSE)) {
			
			bool isHover = isInRect(msg, 650, 166, 250, 166);// �������Ƿ��ڰ�ť������
			
			if (msg.message == WM_LBUTTONDOWN && isHover) {// ���������
				//cout << "��ť�����" << endl;
				
				init();
				goto A;
			}
			bool isH = isInRect(msg, 650, 166*2, 250, 166);// �������Ƿ��ڰ�ť������

			if (msg.message == WM_LBUTTONDOWN && isH) {// ���������
				//cout << "��ť�����" << endl;
				mainmenu();
				menuState = MENU;
				return 0;
			}


			
			if (msg.x > 650) continue; //���ⳬ����Χ��������
			for (int i = 0; i < 15; i++)
			{
				for (int j = 0; j < 15; j++)
				{

					if (abs(msg.x - i * 32 - 75) < 16 && abs(msg.y - j * 32 - 26) < 16)//�Ż����ӷ�Χ
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


			if (board[(C.getX() - 75) / 32][(C.getY() - 26) / 32] != (-1))  continue;//����ͬһλ������


			//cout << "*****************************" << endl;//����λ����־
			//cout << "X:" << C.getX() << "Y:" << C.getY() << endl;
			//cout << "*****************************" << endl;//����λ����־



			if (msg.message == WM_LBUTTONDOWN)//��������
			{
				int mark = flag % 2;
				if (mark)
				{

					setfillcolor(WHITE);//����
					board[(C.getX() - 75) / 32][(C.getY() - 26) / 32] = 1;
					data2out();
					if (mark == isWin((C.getX() - 75) / 32, (C.getY() - 26) / 32, flag))
					{
						cout << "WIN WHITE" << endl;
						init();//��ʼ������
						overMenu(mark);
						mainmenu();
						menuState = MENU;//�����󷵻�������
						return 0;
					}
					flag++;//Ϊ����+
				}
				else
				{
					setfillcolor(BLACK);//����

					board[(C.getX() - 75) / 32][(C.getY() - 26) / 32] = 0;
					data2out();
					if (mark == isWin((C.getX() - 75) / 32, (C.getY() - 26) / 32, flag))
					{
						cout << "WIN BLACK" << endl;
						init();//��ʼ������
						overMenu(mark);
						mainmenu();
						menuState = MENU;//�����󷵻�������
						return 0;
						
					}
					flag++;//Ϊ����+
				}
				solidcircle(C.getX(), C.getY(), 10);//λ�ã��뾶





				cout << "********************************************************************************************************************" << endl;//������־
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