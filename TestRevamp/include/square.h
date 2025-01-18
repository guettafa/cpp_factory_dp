#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape {
public: 
	void draw() override {
		std::cout << "Drawing a Square" << "\n";
	}
};

#endif // !SQUARE_H