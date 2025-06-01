#ifndef CONTROL_MUSIC_H
#define CONTROL_MUSIC_H
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