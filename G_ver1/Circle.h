#pragma once
#include "Figure.h"
#include "Square.h"

class Circle : public Figure {
private:
	int radius;
public:
	Circle() {  };
	Circle(Rectangle, int, int, int);
	void Draw(Graphics^) override;
	void Delete(Graphics^) override;
	void Move(Graphics^, Rectangle, int, int) override;
	void CopyTo(Graphics^, Rectangle, int, int);
	int GetRadius();
	bool IsOutOfBorders(Rectangle, int, int, int);
};

