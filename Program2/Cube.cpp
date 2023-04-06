#include <string>
#include <iostream>
#include "Shape.h"
using namespace std;

//Constructor
Cube::Cube() { // default
	base = 0;
	height = 0;
}
Cube::Cube(int b, int h) {
	base = b;
	height = h;
}
// Setters and getters
// Setters:

void Cube::setBase(int b) {
	base = b;
}
void Cube::setHeight(int h) {
	height = h;
}
// getters

int Cube::getBase() {
	return base;
}
int Cube::getHeight() {
	return height;
}
double Cube::getArea() {
	return (base * height) * 6;
}
string Cube::getName() {
	return "Cube";
}