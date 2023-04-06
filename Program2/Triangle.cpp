#include <string>
#include <iostream>
#include "Shape.h"
using namespace std;

Triangle::Triangle(int b, int h) {
	heigth = h;
	base = b;
}
Triangle::Triangle() {
	heigth = 0;
	base = 0;
}
void Triangle::setBase(int b) {
	base = b;
}
void Triangle::setHeight(int h) {
	heigth = h;
}
int Triangle::getBase() {
	return base;
}
int Triangle::getHeight() {
	return heigth;
}
double Triangle::getArea() {
	return (base * heigth) / 2;
}
std::string Triangle::getName() {
	return "Triangle";
}
