#include"isWin.h"
#include"Chess.h"
#include"twoMenu.h"
//�ļ��� isWin.cpp
//����LYX
//���ܣ��ж�ʤ��
extern vector<vector<int>> board;
int isWin(int x, int y, int flag)
{
	cout << x << " " << y << endl;
	//**************************************************************************//
	int count = 1;//��¼����
	int mark = flag % 2;
	for (int i = 1; i < 5; i++)//������ 
	{
		if ( x + i >= 15) break;//��ֹԽ��
		if (board[x + i][y] == mark)
		{
			count++;
			//cout << count << endl;
			if (5 == count) {
				//cout << "-count" << endl;
				return  mark;
			}
		}
		else
		{
			break;
		}

	}
	for (int i = 1; i < 5; i++)//������
	{
		if (x - i < 0) break;//��ֹԽ��
		if (board[x - i][y] == mark)
		{
			count++;
			//cout << count << endl;
			if (5 == count) {
				//cout << "-count" << endl;
				return  mark;
			}
		}
		else
		{
			break;
		}
	}
	count = 1;//��ʼ��Ϊ1
	//**************************************************************************//

	for (int i = 1; i < 5; i++)//���� ��
	{
		if (y + i >= 15) break;//��ֹԽ��
		if (board[x][y + i] == mark)
		{
			count++;
			if (5 == count) {
				//cout << "|count" << endl;
				return  mark;
			}
		}
		else
		{
			break;
		}
	}
	for (int i = 1; i < 5; i++)//���� ��
	{
		if (y - i < 0) break;//��ֹԽ��
		if (board[x][y - i] == mark)
		{
			count++;
			if (5 == count) {
				//cout << "|count" << endl;
				return  mark;
			}

		}
		else
		{
			break;
		}

	}
	
	count = 1;//��ʼ��Ϊ1
	//**************************************************************************//

	for (int i = 1; i < 5; i++)//	\�� 
	{
		if (x - i < 0 || y - i <0) break;//��ֹԽ��
		
		if (board[x - i][y - i] == mark)
		{
			count++;
			if (5 == count) {
				//cout << "\count" << endl;
				return  mark;
			}


		}
		else
		{
			break;
		}
	}
	for (int i = 1; i < 5; i++)//	\�� 
	{
		if (y + i >= 15 || x + i >= 15) break;//��ֹԽ��
		
		if (board[x + i][y + i] == mark)
		{
			count++;
			if (5 == count)
			{
				//cout << "\count"  << endl;
				return  mark;
			}
			 
		}

	}
	
	count = 1;//��ʼ��Ϊ1
	//**************************************************************************//

	for (int i = 1; i < 5; i++)//	/�� 
	{
		if (x + i >= 15 || y - i < 0) break;
		
		//��ֹԽ��
		
		if (board[x + i][y - i] == mark)
		{
			count++;
			//cout << count << endl;
			if (5 == count) 
			{
				//cout << "/count" << endl;
				
				return  mark;
			}
		}
		else
		{
			break;
		}
	}
	for (int i = 1; i < 5; i++)//	/�� 
	{
		
		if (x - i < 0 || y + i >= 15) break;//��ֹԽ��
		if (board[x - i][y + i] == mark)
		{
			count++;
			
			if (5 == count)
			{
				//cout << "/count" << endl;
				return  mark;
			}
			
		}
		else
		{
			break;
		}


	}
	
	count = 1;//��ʼ��Ϊ1
	//**************************************************************************//
	return -1;
}