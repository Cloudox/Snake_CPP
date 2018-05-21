// Snake.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "StartInterface.h"
#include "Tools.h"



int main()
{
	setWindowSize(41, 32);
	setColor(2);
	StartInterface *start = new StartInterface();
	start->printAppear();

	system("pause");
    return 0;
}

