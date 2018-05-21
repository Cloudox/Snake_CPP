#include "stdafx.h"
#include "Tools.h"
#include <windows.h>


Tools::Tools() {
}


Tools::~Tools() {
}

void setCursorPosition(const int x, const int y) {// 设置光标位置
	COORD position;// COORD是Windows API中定义的一种结构,表示一个字符在控制台屏幕上的坐标
	position.X = x * 2;// 一个方块占两个字符，所以宽度乘以2
	position.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);// 根据position坐标设置光标位置，GetStdHandle(STD_OUTPUT_HANDLE)获取标准输出句柄
}

void setWindowSize(int cols, int lines) {// 设置窗口大小
	system("title 贪吃蛇");// 设置窗口标题
	char cmd[30];
	sprintf_s(cmd, "mode con cols=%d lines=%d", cols * 2, lines);// 一个方块占两个字符，所以宽度乘以2
	system(cmd);// system(mode con cols = 88 lines = 88)设置窗口宽度和高度
}

void setColor(int colorID) {// 设置文本颜色
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorID);
}

void setBackColor() {// 设置文本背景色
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
}
