#include "stdafx.h"
#include "Point.h"
#include "Tools.h"
#include <iostream>


Point::Point() {
}


void Point::print() {// �������
	setCursorPosition(x, y);
	std::cout << "��";
}

void Point::printCircular() {// ���Բ��
	setCursorPosition(x, y);
	std::cout << "��";
}

void Point::changePosition(const int x, const int y) {// �ı�����
	this->x = x;
	this->y = y;
}

void Point::clear() {// �����������
	setCursorPosition(x, y);
	std::cout << " ";
}

Point::~Point() {
}
