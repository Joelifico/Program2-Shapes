#include <string>
#include <iostream>
#include "Shape.h"
using namespace std;
Rectangle::Rectangle(int w, int h) {
	weigth= w;
	height = h;	
}
void Rectangle::setWidth(int w) {
	weigth = w;
}
int Rectangle::getWidht(){
	return weigth;
}
void Rectangle::setHeight(int h) {
	height = h;
}
int Rectangle::getHeight() {
	return height;
}
double Rectangle::getArea() {
	return  weigth * height;
}

std::string Rectangle::getName() {
	return "Rectangle";
}
