#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape {
public:
	virtual void draw() = 0; // force the method to be overriden by the concrete
	virtual ~Shape() {} // Virtual Destructor
};

#endif // !SHAPE_H