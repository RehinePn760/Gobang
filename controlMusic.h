#ifndef CONTROL_MUSIC_H
#define CONTROL_MUSIC_H
//文件名 controlMusic.h
//负责：WYJ
//功能：音乐界面功能
#include<iostream>
#include<graphics.h>
#include"isInRect.h"
#include<Mmsystem.h>
#pragma comment(lib,"winmm.lib")
#include<conio.h>
extern enum gameState menuState;
using namespace std;
void controlMusic(ExMessage& msg, gameState& menuState);

#endif