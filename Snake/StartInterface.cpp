#include "stdafx.h"
#include "StartInterface.h"
#include <windows.h>




void StartInterface::printAppear() {// 蛇从左边出现到完全出现的过程
	for (auto &point : startSnake) {
		point.print();
		Sleep(speed);
	}
}

StartInterface::~StartInterface() {
}
