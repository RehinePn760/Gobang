#ifndef CONTROL_SETTING_H
#define CONTROL_SETTING_H
//�ļ��� controlSetting.h
//����WYJ
//���ܣ����ý��湦��
#include<iostream>
#include<graphics.h>
#include"isInRect.h"
extern enum gameState menuState;
using namespace std;
void controlSetting(ExMessage& msg, gameState& menuState);

#endif