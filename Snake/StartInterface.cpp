#include "stdafx.h"
#include "StartInterface.h"
#include <windows.h>




void StartInterface::printAppear() {// �ߴ���߳��ֵ���ȫ���ֵĹ���
	for (auto &point : startSnake) {
		point.print();
		Sleep(speed);
	}
}

StartInterface::~StartInterface() {
}
