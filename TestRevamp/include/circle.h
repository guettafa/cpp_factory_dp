#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape {
public:
	void draw() override {
		std::cout << "Drawing a Circle" << "\n";
	}
};

#endif // !CIRCLE_H