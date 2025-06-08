#ifndef IS_INRECT
#define IS_INRECT
//文件名 isInRect.h
//负责：LYX
//功能：识别鼠标是否在区域内
#include<iostream>
#include<graphics.h>
#include<vector>
using namespace std;
bool isInRect(ExMessage& msg, int x, int y, int l, int w);
#endif
