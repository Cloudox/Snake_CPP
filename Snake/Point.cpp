#include "stdafx.h"
#include "Point.h"
#include "Tools.h"
#include <iostream>


Point::Point() {
}


void Point::print() {// 输出方块
	setCursorPosition(x, y);
	std::cout << "■";
}

void Point::printCircular() {// 输出圆形
	setCursorPosition(x, y);
	std::cout << "●";
}

void Point::changePosition(const int x, const int y) {// 改变坐标
	this->x = x;
	this->y = y;
}

void Point::clear() {// 清楚坐标内容
	setCursorPosition(x, y);
	std::cout << " ";
}

Point::~Point() {
}
