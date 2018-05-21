#include "stdafx.h"
#include "Tools.h"
#include <windows.h>


Tools::Tools() {
}


Tools::~Tools() {
}

void setCursorPosition(const int x, const int y) {// ���ù��λ��
	COORD position;// COORD��Windows API�ж����һ�ֽṹ,��ʾһ���ַ��ڿ���̨��Ļ�ϵ�����
	position.X = x * 2;// һ������ռ�����ַ������Կ�ȳ���2
	position.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);// ����position�������ù��λ�ã�GetStdHandle(STD_OUTPUT_HANDLE)��ȡ��׼������
}

void setWindowSize(int cols, int lines) {// ���ô��ڴ�С
	system("title ̰����");// ���ô��ڱ���
	char cmd[30];
	sprintf_s(cmd, "mode con cols=%d lines=%d", cols * 2, lines);// һ������ռ�����ַ������Կ�ȳ���2
	system(cmd);// system(mode con cols = 88 lines = 88)���ô��ڿ�Ⱥ͸߶�
}

void setColor(int colorID) {// �����ı���ɫ
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorID);
}

void setBackColor() {// �����ı�����ɫ
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
}
