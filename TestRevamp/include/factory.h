#ifndef FACTORY_H
#define FACTORY_H

#include "shape.h"

// Abstract Creator class 

class ShapeFactory {
public:
	virtual std::unique_ptr<Shape> createShape() = 0;
	virtual ~ShapeFactory() = default;
};

#endif // !FACTORY_H