#include "Chess.h"
//文件名 chess.cpp
//负责：LYX
//功能：记录棋子落子位置
void Chess::setX(int X)
{
	this->X = X;
}
void Chess::setY(int Y)
{
	this->Y = Y;
}
int Chess::getX() const
{
	return X;
}
int Chess::getY() const
{
	return Y;
}