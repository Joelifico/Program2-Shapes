#pragma once
#include <string> 
class Shape {
protected:
	std::string nameFig{};
	double areaFig{};
public:
	Shape( std::string& name,double area);
	Shape() = default;



	void virtual setName(std::string&n);
	void  virtual setArea(double a);

	std::string virtual getName()=0;
	double virtual getArea()=0;
};
class TwoDimensionalShape : public Shape {};// concrete class that holds each figure in 2D
class ThreeDimensionalShape: public Shape{};// concrete class that holds each figure in 3D
//-----------------Two Dimensional Shapes-----------------
class Circle :public TwoDimensionalShape {

private:
	float radius{};
public:
	Circle(float rad);
	Circle();
	// setters/getters
	void  setRadius(float rad);//  redius = rad;

	float getRadius();// return radius;
	//calculate Area and print it 
	double getArea() override;
	std::string getName() override;
};

class Rectangle : public TwoDimensionalShape {
private:
	int weigth{};
	int height{};
public :
	// constructor and destructor
	Rectangle(int w, int h);
	Rectangle();
	
	// Setters and getters
	void setWidth(int w); // set Width
	void setHeight(int h); // set Height
	int getWidht(); // return widht
	int getHeight();// return height
	// Methods
	// Calculate the area of the rectangle 
	double getArea()override;
	std::string getName()override;
};

class Triangle : public TwoDimensionalShape {
private:
	int base {};
	int heigth{};
public: 
	// Constructors
	Triangle(int b, int h);
	Triangle();
	// Setters and getters
	void setBase(int b);
	void setHeight(int h);
	
	int getBase();
	int getHeight();
	// Methods 
	double getArea()override;// get the area of the triangle
	std::string getName()override; // get the name of the triangle
	
};
//------------------------------------------------------------------
//----------------3D Shapes-----------------------------------------

class Sphere: public ThreeDimensionalShape {
private:
	double radius{};
public:
	Sphere(double r);// constructors
	Sphere() ;// default constructor

	void setRadius(double r);//  set radius
	double getRadius();// get radius

	double getArea()override;// calculate the Area
	std::string getName()override;// store the Name of the figure
	
};
//----------------------------------------
class Cube :public ThreeDimensionalShape {
private:
	int base{};
	int height{};
public: 
	Cube(int b, int h);
	Cube() ;

	void setBase(int b);// set base
	void setHeight(int h);// set height

	int getBase();
	int getHeight();

	double getArea() override;//  calculate the area of the cube
	std::string getName()override;// get the name of the figure
	
};
//----------------------------------------------
class Tetrahedron : public  ThreeDimensionalShape {
private: 
	int lenght{}; // well technically this is
public:
	Tetrahedron(int l);
	Tetrahedron();

	void setLeght(int l);
	int getLenght();

	double getArea() override; // calculate the area of the tetrahedron
	std::string getName() override; // Get the name of the figure
};