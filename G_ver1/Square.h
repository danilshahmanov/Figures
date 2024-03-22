#pragma once
#include "Figure.h"

using namespace System;


class Square : public Figure
{
private:
	int halfDiagonalLength;
public:
	Square() {};
	Square(Rectangle, int, int, int);
	void Draw(Graphics^) override;
	void Delete(Graphics^) override;
	void Move(Graphics^, Rectangle, int, int) override;
	void CopyTo(Graphics^, Rectangle, int, int);
	bool IsOutOfBorders(Rectangle, int, int, int);
	int GetHalfDiagonalLength();
};