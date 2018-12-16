/*
 * SHEET-2
 * PROBLEM-3 A : volume of sphere,cube,cuboid,and cylinder using function overloading
 * NABIN DHAKAL BCT-022
 * Sagarmatha Engineering College
 */


#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.1416;

int area (int length){
	return length * length * length;
}
float area (float radius){
	return ((4/3)* PI*radius*radius*radius);
}
int area (int length ,int breadth,int height){
	return (length * breadth*height);
}
float area (float radius , float height){
	return (PI*radius*radius*height);
}
int main()
{
	cout<<"Area of Cube is " << area(4)<<endl;
	cout<<"Area of Sphere is " << area(4.0f)<<endl;
	cout<<"Area of Cuboid is " << area(4,5,6)<<endl;
	cout<<"Area of Cylinder is " << area(4,5)<<endl;
	return 0;
}

