#ifndef SHAPE_FACTORY_H
#define SHAPE_FACTORY_H

#include "shape.h"

// Abstract Creator class 

class ShapeFactory {
public:
	virtual std::unique_ptr<Shape> createShape() = 0;
	virtual ~ShapeFactory() = default;
};

#endif // !SHAPE_FACTORY_H