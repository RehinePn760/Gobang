#ifndef GAME_STATE_H
#define GAME_STATE_H

enum gameState {
	MENU,       // ���˵�
	ONEGAME,	//������Ϸ
	TWOGAME,	// ˫����Ϸ
	SSETTING,     // ����
	MUSIC,		//����
	EXIT        // �˳�
};
extern enum gameState menuState;// ����Ϊ�ⲿ�������������ڴ�

#endif