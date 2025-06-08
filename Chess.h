#pragma once
//文件名 chess.h
//负责：LYX
//功能：记录棋子落子位置
class Chess
{
public:
	void setX(int X);
	void setY(int Y);
	int getX()const;
	int getY()const;
private:
	int X;
	int Y;
};

