#pragma once
#include <string>
#include <iostream>
#include "Shape.h"
#include "Moveable.h"
class MoveableShape :public Shape, public Moveable {

private: 
	double positionX;
	double positionY;
public:
	MoveableShape(double posX, double posY);
	MoveableShape();

	//setters and getters
	double getPosX();
	double getPosY();
	void setPosX(double x);
	void setPosY(double y);
	// methods
	double getArea() override;
	std::string getName() override;
	void move(int x, int y) override;
};