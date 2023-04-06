#include <string>
#include <iostream>
#include "Shape.h"
#define PI 3.1415926535;
using namespace std;

Sphere::Sphere(double r):ThreeDimensionalShape() {
	radius = r;
}
Sphere::Sphere() {
	radius = 0; 
}
void Sphere::setRadius(double r) {
	radius = r;
}
double Sphere::getRadius() {
	return radius;
}
double Sphere::getArea() {
	return 4 * radius* radius * PI;
}
std::string Sphere::getName() {
	return "Sphere";
}
