#include <iostream>
#include "ShapeArea1.h"


float areaCircle(float r) 
{
	return(22/7.0*r*r);
}
float areaRectangle(float l , float w)
{
	return(l*w);
}
float areaSquare(float l)
{
	return(l*l);
}

float calPerimeter(float l , float w)
{
	return (2*(l+w));
}

float totalcost(float Perimeter , float cost)
{
	return Perimeter*cost;
}
