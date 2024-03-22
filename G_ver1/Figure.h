#pragma once

using namespace System;
using namespace System::Drawing;
using namespace std;


class Figure abstract {
protected:
	int x, y;

public:
	Figure() {};
	Figure(int, int);
	virtual void Draw(Graphics^) = 0;
	virtual void Delete(Graphics^) = 0;
	virtual void Move(Graphics^, Rectangle, int, int) = 0;
	int GetXCenterCoordinate();
	int GetYCenterCoordinate();
	class OutOfWindow {};
};