#include <string>
#include <iostream>

#include "Shape.h"
#define PI 3.1415926535
using namespace std;

// Circle class
// Constructor
Circle::Circle(float R):TwoDimensionalShape() {
	 radius = R;
}
// Setters and gatters
void Circle::setRadius(float r) {
	radius = r;
}
float Circle::getRadius() {
	return radius;
}
// Methods 
double Circle::getArea() {
	return PI * radius * radius;
}
std::string Circle::getName() {
	return "Circle";
}