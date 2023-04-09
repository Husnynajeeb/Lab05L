#include <iostream>
#include "ShapeArea1.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct shape{
	
  float length , width , radius; 	//ssss
};

int main(int argc, char** argv) {
	
	shape Circle , Square , small_Rectangle , large_Rectangle;
	float Total_Area , Perimeter , Cost;
	
	Circle.radius = 5;
	Square.length = 4;
	small_Rectangle.length = 7;
	small_Rectangle.width = 3;
	large_Rectangle.length = 28; 	
	large_Rectangle.width = 15;
	
	Total_Area = areaRectangle(large_Rectangle.length , large_Rectangle.width) - (areaRectangle(small_Rectangle.length, small_Rectangle.width) + areaSquare(Square.length) + areaCircle(Circle.radius)); 
	
	cout<<"Total Area: "<<Total_Area<<endl;
	
	Perimeter = calPerimeter(large_Rectangle.length , large_Rectangle.width);
	
	cout<<"Perimeter: "<<Perimeter<<endl;
	
	cout<<"Enter the cost of per fence ";
	cin>>Cost;
	
    cout<<"Cost:  "<<totalcost(	Perimeter , Cost);
	
	
	 
	
	 
	 	
	return 0;
}

