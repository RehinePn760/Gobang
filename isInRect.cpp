#include "isInRect.h"
//文件名 isInRect.cpp
//负责：LYX
//功能：识别鼠标是否在区域内
bool isInRect(ExMessage& msg,int x,int y,int l,int w)//判断鼠标在不在某区域
{
	if (msg.x > x && msg.x < x + l && msg.y >y && msg.y < y + w)
	{
		return true;
	}
	return false;
}