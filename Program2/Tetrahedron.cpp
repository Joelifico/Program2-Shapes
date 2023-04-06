#include <string>
#include <iostream>
#include "Shape.h"
#include <cmath>
using namespace std;

Tetrahedron::Tetrahedron() {
	lenght = 0;
}
Tetrahedron::Tetrahedron(int l) {
	lenght = l;
}
//setters and getters
void Tetrahedron::setLeght(int l) {
	lenght = l;
}
int Tetrahedron::getLenght() {
	return lenght;
}
double Tetrahedron::getArea() {
	double area = sqrtf(3) * (lenght ^ 2);
	return area;
}
string Tetrahedron::getName() {
	return "Tetrahedron";
}
