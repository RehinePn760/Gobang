#include "isInRect.h"
//�ļ��� isInRect.cpp
//����LYX
//���ܣ�ʶ������Ƿ���������
bool isInRect(ExMessage& msg,int x,int y,int l,int w)//�ж�����ڲ���ĳ����
{
	if (msg.x > x && msg.x < x + l && msg.y >y && msg.y < y + w)
	{
		return true;
	}
	return false;
}