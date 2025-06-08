#ifndef CONTROL_SETTING_H
#define CONTROL_SETTING_H
//文件名 controlSetting.h
//负责：WYJ
//功能：设置界面功能
#include<iostream>
#include<graphics.h>
#include"isInRect.h"
extern enum gameState menuState;
using namespace std;
void controlSetting(ExMessage& msg, gameState& menuState);

#endif