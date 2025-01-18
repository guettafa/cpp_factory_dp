#ifndef SHAPES_FACTORY_H
#define SHAPES_FACTORY_H

#include "factory.h"
#include "circle.h"
#include "square.h"

namespace Factories {

	class CircleFactory : public ShapeFactory {
	public:
		std::unique_ptr<Shape> createShape() override {
			return std::make_unique<Circle>();
		}
	};

	class SquareFactory : public ShapeFactory {
	public:
		std::unique_ptr<Shape> createShape() override {
			return std::make_unique<Square>();
		}
	};
}

#endif // !SHAPES_FACTORY_H