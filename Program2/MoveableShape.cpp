#include <string>
#include <iostream>
#include "MoveableShape.h"
using namespace std;
MoveableShape::MoveableShape(double x, double y) {
	positionX = x;
	positionY = y;
}
MoveableShape::MoveableShape() {
	positionX = 0;
	positionY = 0;
}
void MoveableShape::setPosX(double x) {
	positionX = x;
}
void MoveableShape::setPosY(double y) {
	positionY = y;
}
double MoveableShape::getPosX() {
	return positionX;
}
double MoveableShape::getPosY() {
	return positionY;
}
double MoveableShape::getArea() {
	return 0;// It doesnt have a specific area
}
string MoveableShape::getName() {
	return "Moveable Shapes";
}
void MoveableShape::move(int x, int y) {
	//Moving 
	positionX = x;
	positionY = y;
	cout << "Moving to (" << x << ", " << y << ")" << std::endl;
}