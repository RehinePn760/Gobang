#ifndef GAME_STATE_H
#define GAME_STATE_H
//�ļ��� gameState.h
//����WYJ
//���ܣ��ṩ�������
enum gameState {
	MENU,       // ���˵�
	TWOGAME,	// ˫����Ϸ
	SSETTING,     // ����
	MUSIC,		//����
	EXIT        // �˳�
};
extern enum gameState menuState;// ����Ϊ�ⲿ�������������ڴ�

#endif