#include <vector>
#include <string>
#include <iostream>
#include "Shape.h"
#include "MoveableShape.h"
using namespace std;

int main() {
	Circle circle(3);
	Rectangle rectangle(5, 6);
	Triangle triangle(4, 4);
	MoveableShape moveableShape(2, 3);



	//Call getArea() and getName
	cout << "Area of the Circle: " <<circle.getArea() << endl;
	cout << "Name of the Circle: " << circle.getName() << endl;
	cout << "Area of the Rectangle: " << rectangle.getArea() << endl;
	cout << "Name of the Rectangle: " << rectangle.getName() << endl;
	cout << "Area of the Triangle: " << triangle.getArea() << endl;
	// call move() 
	moveableShape.move(5, 5);

	// List of figures.
	std::vector<Circle> circles;
	std::vector<Rectangle> rectangles;
	std::vector<Triangle> triangles;
	std::vector<MoveableShape> moveShapes;
	// Circle list
	circles.push_back(Circle(2));
	circles.push_back(Circle(3));
	circles.push_back(Circle(4));
	// Rectangle List
	rectangles.push_back(Rectangle(1,1));
	rectangles.push_back(Rectangle(2,2));
	rectangles.push_back(Rectangle(3,3));
	// Triangle list
	triangles.push_back(Triangle(1,1));
	triangles.push_back(Triangle(2, 2));
	triangles.push_back(Triangle(3, 3));
	// MoveableShapes 
	moveShapes.push_back(MoveableShape(2,2));
	moveShapes.push_back(MoveableShape(3, 3));
	moveShapes.push_back(MoveableShape(4, 4));

	// Print the list of objects

	cout << "Circles: " << endl;

	for (auto& circle: circles) {
		cout << circle.getName() << ", area= " << circle.getArea() << endl;
	}


	cout << "Rectangle: " << endl;
	for (auto& rectangle: rectangles) {
		cout << rectangle.getName() << ", area= " << rectangle.getArea() << endl;
	}

	cout << "Triangle: " << endl;
	for (auto& triangle: triangles) {
		cout << "" << triangle.getName() << ", area = " << triangle.getArea() << endl;
	}

}	
