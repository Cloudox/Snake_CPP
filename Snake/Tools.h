#pragma once
class Tools {
public:
	Tools();
	~Tools();
};

void setCursorPosition(const int x, const int y);// ���ù��λ��
void setWindowSize(int cols, int lines);
void setColor(int colorID);
void setBackColor();
