#pragma once
#include <deque>
#include <vector>
#include "Point.h"
class StartInterface {
public:
	StartInterface() : speed(100) {
		startSnake.emplace_back(Point(0, 14));// 蛇
		startSnake.emplace_back(Point(1, 14));
		startSnake.emplace_back(Point(2, 14));
		startSnake.emplace_back(Point(3, 14));
		startSnake.emplace_back(Point(4, 14));
		startSnake.emplace_back(Point(5, 14));
		startSnake.emplace_back(Point(6, 14));
		startSnake.emplace_back(Point(7, 14));
		startSnake.emplace_back(Point(8, 14));
		startSnake.emplace_back(Point(9, 14));
	};
	void printAppear();
	~StartInterface();
private:
	std::deque<Point> startSnake;// 开始动画中的蛇
	int speed;// 动画速度
};

