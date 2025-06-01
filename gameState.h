#ifndef GAME_STATE_H
#define GAME_STATE_H

enum gameState {
	MENU,       // 主菜单
	ONEGAME,	//单人游戏
	TWOGAME,	// 双人游戏
	SSETTING,     // 设置
	MUSIC,		//音乐
	EXIT        // 退出
};
extern enum gameState menuState;// 声明为外部变量，不分配内存

#endif