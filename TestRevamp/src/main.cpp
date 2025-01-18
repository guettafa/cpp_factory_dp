#include "factories.h"

int main() {

#pragma region Factory Instances AKA Concrete Creators
	
	// Smart ptr like unique_ptr self destruct when out of scope

	std::unique_ptr<ShapeFactory> circleFactory{ 
		std::make_unique<Factories::CircleFactory>() 
	};

	std::unique_ptr<ShapeFactory> squareFactory{ 
		std::make_unique<Factories::SquareFactory>() 
	};

#pragma endregion

#pragma region Shape Instances AKA Concrete Products

	std::unique_ptr<Shape> circle = circleFactory->createShape();
	std::unique_ptr<Shape> square = squareFactory->createShape();

	circle->draw();
	square->draw();

#pragma endregion

	return 0;
}