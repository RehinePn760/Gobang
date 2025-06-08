#ifndef START_UP_H
#define START_UP_H
#include<iostream>
#include<graphics.h>
#include"isInRect.h"
//文件名 controlMenu.h
//负责：WYJ
//功能：提供按钮反馈 切换页面
extern enum gameState menuState;
using namespace std;
void controlMenu(ExMessage& msg , gameState &menuState);
#endif
