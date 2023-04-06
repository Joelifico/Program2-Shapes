#include <string>
#include <iostream>
#include "Shape.h"
using namespace std;
// Constructor
Shape::Shape(std::string& name, double area) {
	nameFig = name;
	areaFig = area;
}
// setters and gatters

void Shape::setName(std::string& name) {
	nameFig = name;
}
void Shape::setArea(double area) {
	areaFig = area;
}
string Shape::getName() {
	return nameFig;
}
double Shape::getArea() {
	return areaFig;
}
