#include"controlMusic.h"
#include"gameState.h"
void controlMusic(ExMessage& msg, gameState& menuState)
{
	setlinecolor(WHITE);
	if (isInRect(msg, 330, 130, 530-330, 190-130))
	{
		setlinecolor(RED);
		if (msg.message == WM_LBUTTONDOWN) {
			
			mciSendString("close BGM2 ", NULL, 0, NULL);//防止两首同时播放

			mciSendString("open ./assets/Music/SHUQING.mp3 alias BGM1", NULL, 0, NULL);
			mciSendString("play BGM1 repeat", NULL, 0, NULL);//重复播放
			mciSendString("setaudio BGM1 volume to 600", NULL, 0, NULL);//调节合适音量
		}
	}
	rectangle(330, 130,  530,  190);

	setlinecolor(WHITE);
	if (isInRect(msg, 330, 220, 522-330, 260-220))
	{
		setlinecolor(RED);
		if (msg.message == WM_LBUTTONDOWN) {

			mciSendString("close BGM1 ", NULL, 0, NULL);//防止两首同时播放

			mciSendString("open ./assets/Music/GUOFENGLIUXING.mp3 alias BGM2", NULL, 0, NULL);
			mciSendString("play BGM2 repeat", NULL, 0, NULL);//重复播放
			mciSendString("setaudio BGM2 volume to 600", NULL, 0, NULL); // 调节合适音量
		}
	}
	rectangle(330, 220, 522, 260);

	setlinecolor(WHITE);
	if (isInRect(msg, 340, 290, 422-340, 350-290))
	{
		setlinecolor(RED);
		if (msg.message == WM_LBUTTONDOWN) {
			mciSendString("close BGM1 ", NULL, 0, NULL);
			mciSendString("close BGM2 ", NULL, 0, NULL);
		}
	}
	rectangle(340, 290, 422, 350);


	setlinecolor(WHITE);
	if (isInRect(msg, 330, 370, 430-330, 420-370))
	{
		setlinecolor(RED);
		if (msg.message == WM_LBUTTONDOWN)menuState = SSETTING;

	}
	rectangle(330, 370, 430 , 420);
}
