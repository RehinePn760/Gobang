#include"controlMusic.h"
#include"gameState.h"
//文件名 controlMusic.cpp
//负责：WYJ
//功能：音乐界面功能
void controlMusic(ExMessage& msg, gameState& menuState)
{
	setlinecolor(WHITE);
	if (isInRect(msg, 385, 135, 530-385, 185-135))
	{
		setlinecolor(BROWN);
		if (msg.message == WM_LBUTTONDOWN) {
			
			mciSendString("close BGM2 ", NULL, 0, NULL);//防止两首同时播放

			mciSendString("open ./assets/Music/SHUQING.mp3 alias BGM1", NULL, 0, NULL);
			mciSendString("play BGM1 repeat", NULL, 0, NULL);//重复播放
			mciSendString("setaudio BGM1 volume to 600", NULL, 0, NULL);//调节合适音量
		}
	}
	rectangle(385, 135,  530,  185);

	setlinecolor(WHITE);
	if (isInRect(msg, 385, 210, 530 - 385, 260 -215))
	{
		setlinecolor(BROWN);
		if (msg.message == WM_LBUTTONDOWN) {

			mciSendString("close BGM1 ", NULL, 0, NULL);//防止两首同时播放

			mciSendString("open ./assets/Music/GUOFENGLIUXING.mp3 alias BGM2", NULL, 0, NULL);
			mciSendString("play BGM2 repeat", NULL, 0, NULL);//重复播放
			mciSendString("setaudio BGM2 volume to 600", NULL, 0, NULL); // 调节合适音量
		}
	}
	rectangle(385, 210, 530, 260);

	setlinecolor(WHITE);
	if (isInRect(msg, 385, 285, 465 - 385, 330- 290))
	{
		setlinecolor(BROWN);
		if (msg.message == WM_LBUTTONDOWN) {
			mciSendString("close BGM1 ", NULL, 0, NULL);
			mciSendString("close BGM2 ", NULL, 0, NULL);
		}
	}
	rectangle(385, 285, 465, 330);


	setlinecolor(WHITE);
	if (isInRect(msg, 385, 345, 465 - 385, 395 - 345))
	{
		setlinecolor(BROWN);
		if (msg.message == WM_LBUTTONDOWN)menuState = SSETTING;

	}
	rectangle(385, 345, 465, 395);
}
