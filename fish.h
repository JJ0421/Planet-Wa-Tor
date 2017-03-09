#pragma once
#include "stdafx.h"

class Fish
{

private:
	int turn;

public:
	Fish();
	~Fish();
	int move(int i, int j);
	bool checkOpen(int topLeft, int top, int topRight, int right, int bottomRight, int bottom, int bottomLeft, int left);
};