#ifndef START_UP_H
#define START_UP_H
#include<iostream>
#include<graphics.h>
#include"isInRect.h"
//�ļ��� controlMenu.h
//����WYJ
//���ܣ��ṩ��ť���� �л�ҳ��
extern enum gameState menuState;
using namespace std;
void controlMenu(ExMessage& msg , gameState &menuState);
#endif
